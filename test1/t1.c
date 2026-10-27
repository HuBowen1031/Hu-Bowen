#include <stdio.h>
#include <math.h>

/*说明：因为题目要求用double, abs()只能处理int, 所以换为fabs()*/
double getfabsAbsMaxOrg(double a, double b, double c) {
    if (fabs(a) > fabs(b)) {
        if (fabs(a) > fabs(c)) return a;
        else return c;
    }
    else { /*fabs(b) > fabs(a)*/
        if (fabs(b) > fabs(c)) return b;
        else return c;
    }
}

int main() {
    double a, b, c;
    printf("Please input 3 double value: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    printf("The original value of absolute maximum is:%10.2lf\n",getfabsAbsMaxOrg(a, b, c));

}