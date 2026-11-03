#include<stdio.h>
int main(){
	int v=15;
	int a[10]={1,3,4,5,7,8,9,10,15,20};
	int pmid=0;
	int left=0;
	int right=9;
	pmid = (left + right) / 2;
	while(left < right)
	{
		if(v>a[pmid])
		{
			left = pmid+1;
			
		}
		else if (v < a[pmid])
		{
			right = pmid - 1;
		}
		
		else break;
		
		pmid = (right + left)/2;
	}
	
	if(pmid>=0 && pmid<=9 && v == a[pmid])
	{
		printf("%d is what you search for",pmid);
	}
    else
    {
	printf("%d is not in the group",v);
    }
}
