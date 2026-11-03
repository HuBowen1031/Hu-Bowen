#include <stdio.h>
int main(){
 int a = 0x1234;	int b = 0x5678;  
 int c[10] = {0,1,2,3,4,5,6,7,8,9};
 int aa = (int)&a; 	int ab = (int)&b;
 int ac = (int)&c;
 int ac0 = (int)&c[0];	int ac1 = (int)&c[1];
 int ac9 = (int)&c[9];	int ac10 = (int)&c[10];
 printf("aa =%08x\tab =%08x\tac =%08x\n", aa, ab, ac);
 printf("ac0=%08x\tac1=%08x\n", ac0, ac1);
 printf("ac1-ac0=%d, sizeof(int)=%d\n", ac1-ac0, sizeof(int));
 printf("ac9=%08x\tac10=%08x\n", ac9, ac10);
 printf("ac9-ac0=%d\tac10-ac0=%d\n", ac9-ac0, ac10-ac0);
}
