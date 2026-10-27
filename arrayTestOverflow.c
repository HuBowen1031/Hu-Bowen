#include <stdio.h>

int main() {
    int x=999; 
	int a[10];
	int i;
	printf("x=%d\n", x);
	for (i=0; i<=10;i++){
		a[i]=i;
	}
	
	printf("x=%d\n", x);
	for(i=9;i>=0; i--){
		printf("%d ", a[i]);
	}
	printf("\n");

}