// Input  : 3
// Output : 6

// Input  : 5
// Output : 15

#include<stdio.h>

int Addition(int);

int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    iRet = Addition(iNo);

    printf("Addition is : %d\n",iRet);
    return 0;
}
int Addition(int iValue)
{
    int iSum = 0;
    register int iCnt = 0;
    for(iCnt = 1; iCnt <= iValue ; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}