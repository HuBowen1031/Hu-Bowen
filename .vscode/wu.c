#include<stdio.h>
int main(){
    int m;
    int n;
    int i;
    int c;
    scanf("%d",&n);
    int a[n];
    int b[m];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("%d",m);
    for(i=0;i<m;i++){
        b[i]=a[n-m+i];
        a[(i+m)%10]=a[i];
        
    }
}