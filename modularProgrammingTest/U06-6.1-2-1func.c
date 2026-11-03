#include <stdio.h>
#include <math.h>

/*Ѱ��2~9��Ϊ�����ӵ������������ϣ��ñ�־*/
int checkFactor(int iTest)
{
	int i;
	int flag = 1;  
	for (i=2; i<=9; i++)
	{
		if (iTest % i != 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;	/*����flag*/
}

/*��ָ���ÿһλ������*/
void split2Array(int iTemp, int nLen, int cTemp[])
{
	int i;
	for (i = 0; i < nLen; i++)
	{
		cTemp[i] = iTemp%10;
		iTemp = iTemp/10;
    }
	return;
}

/*��������ÿһλ�Ƿ���ͬ,��ͬ��ʧ�ܣ��ñ�־*/
int checkArray(int nLen, int cTemp[])
{
	int i, j;
	int flag = 1; 
	for (i=0; i<nLen-1; i++)
	{
		for (j=i+1; j<nLen; j++)
		{
			if (cTemp[i] == cTemp[j])
			{
				flag = 0;
				break;
			}
		}
		if (flag==0)
			break;
    }   

	return flag;;
}



int mainNotUsed()
{
    int nCount = 0;
    int nLen = 0;
    int iTest = 0;
    int iTemp = 0;
    int iMin = 0;
    int iMax = 0;
    int cTemp[100];
    int nRet;
	
	/*����n���ж�n�Ƿ���1-8֮�䣬������ʾ���󲢷���*/
	scanf("%d", &nLen);
	if (nLen <1 || nLen > 8)
		return -1;

	/*����Nλ������Сֵ�����ֵ(4λ����1000-9999)*/
    iMin = (int)pow(10, nLen-1) ;
    iMax = (int)pow(10, nLen) - 1;
        
	/*����Сֵ�����ֵ����(���Forѭ��)*/
    for (iTest = iMin; iTest <= iMax; iTest+=2)
    {
		nRet = checkFactor(iTest);
		if (nRet ==0) continue;

		/*��ָ���ÿһλ������ctemp*/
		split2Array(iTest, nLen, cTemp);	

        /*��������ÿһλ�Ƿ���ͬ,��ͬ��ʧ��*/
		nRet = checkArray(nLen, cTemp);
		if (nRet ==0) continue;

		printf("%d\n", iTest);
		nCount++;
	}
    
	/*�����ڷ���Ҫ�����*/
    if (nCount == 0)
        printf("not exist");
	
    return 0;
}
