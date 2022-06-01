
// Input : 4
// Output : 1*  2*  3*  4*  5*

#include<stdio.h>

void Display(int iNo)
{
     int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}