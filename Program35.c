// 1124 = 6
// 2263 = 10
// 3357 = 0
#include<stdio.h>

int SumEven(int );

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = SumEven(iValue);
	
	printf("Sum of even digits are : %d",iRet);
	return 0;
}
int SumEven(int iNo)
{
	int iSum = 0;
	int iDigit = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo > 0)
	{
        iDigit = iNo % 10;
        if(iDigit%2 == 0)
        {
            iSum = iSum + iDigit;
        }
		iNo = iNo/10;

	}
	return iSum;
}