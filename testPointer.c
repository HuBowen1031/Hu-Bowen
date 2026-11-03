#include <stdio.h>
int main ( )
{ 
	int a = 10;
	int b = 20;
	int *pa;
	int *pb;
	pa = &a;
	pb = &b;
	printf("a=0x%x, b=0x%x, *pa=%d, *pb=%d\n",a,b,*pa,*pb);
	printf("&a =%08x, &b =%08x\n", &a, &b);	
	printf("&pa=%08x, &pb=%08x\n", &pa, &pb);	
	printf("pa =%08x, pb =%08x\n", pa, pb);	
}
