#include<stdio.h>

int Display(int );

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = Display(iValue);
	
	printf("Count of Digits : %d",iRet);
	return 0;
}
int Display(int iNo)
{
	int iDigit = 0;
	int iCount = 0;
	
	if(iNo == 0)
	{
		return 1;
	}
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo > 0)
	{
		iDigit = iNo%10;
		iCount++;
		iNo = iNo/10;
	}
	return iCount;
}