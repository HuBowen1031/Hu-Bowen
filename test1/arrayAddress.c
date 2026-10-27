#include <stdio.h>
#include <stdlib.h>
 int main() {
	int a, b; int c[10];
	int x = (long long)&a;
	int y = (long long)&b;
	int z = (long long)&c;
	printf("&a:    %08x\n", x);
	printf("&b:    %08x\n", y);
	printf("&c:    %08x\n", z);
	printf("&c[10]:%08x\n", &c[10]);
	printf("&c[11]:%08x\n", &c[11]);
	printf("x-y:   %08x\n", x-y);
	printf("y-z:   %08x\n", y-z);
	return 0;
}
