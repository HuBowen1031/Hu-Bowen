#include <stdio.h>
#include <math.h>
#include <regex.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int sgn(int number) {
    if (number > 0) return 1;
    else if (number == 0) return 0;
    else return -1;
}

/* 去掉空白字符，"1x^2 + 2x - 3 = 0" -> "1x^2+2x-3=0" */
void stripSpaces(const char *src, char *dst) {
    while (*src) {
        if (!isspace((unsigned char)*src)) *dst++ = *src;
        src++;
    }
    *dst = '\0';
}

/* 把第 m 个捕获组的内容抄到 dst 里 */
void copyMatch(const char *src, regmatch_t m, char *dst, size_t size) {
    size_t len = m.rm_eo - m.rm_so;
    if (len >= size) len = size - 1;
    memcpy(dst, src + m.rm_so, len);
    dst[len] = '\0';
}

/* 省略系数的写法："" 和 "+" 都是 1，"-" 是 -1，其余按十进制解析 */
int coefOf(const char *s) {
    if (s[0] == '\0' || strcmp(s, "+") == 0) return 1;
    if (strcmp(s, "-") == 0) return -1;
    return atoi(s);
}

int main() {
    int a, b, c;
    int i;
    char line[256], eq[256], num[3][32];
    regex_t re;
    regmatch_t m[4];
    double delta;
    double s;

    if (fgets(line, sizeof(line), stdin) == NULL) return 1;
    stripSpaces(line, eq);

    if (regcomp(&re, "^([+-]?[0-9]*)x\\^2([+-]?[0-9]*)x([+-]?[0-9]+)(=0)?$",
                REG_EXTENDED) != 0) {
        return 1;
    }
    if (regexec(&re, eq, 4, m, 0) != 0) {
        regfree(&re);
        printf("格式错误，请按 ax^2 + bx + c = 0 输入。\n");
        return 1;
    }
    for (i = 0; i < 3; i++) copyMatch(eq, m[i + 1], num[i], sizeof(num[i]));
    regfree(&re);

    a = coefOf(num[0]);
    b = coefOf(num[1]);
    c = coefOf(num[2]);

    if (a == 0) {
        s = (double)c / (0 - b);
        printf("不是二次方程。\n");
        printf("%lf\n", s);
        return 0;
    }
    delta = b * b - 4 * a * c;

    switch (sgn((int)delta)) {
        case 1 : {
            printf("2个不等实根。\n");
            printf("%lf, %lf\n", (-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a));
            break;
        }
        case 0 : {
            printf("2个相等实根。\n");
            printf("%lf\n", (double)(-b)/(2*a));
            break;
        }
        case -1 : {
            printf("2个共轭复根\n");
            break;
        }
    }
    return 0;
}
