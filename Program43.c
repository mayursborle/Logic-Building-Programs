// Display Table

#include<stdio.h>

void DisplayTable(int);
int main()
{
    int iValue = 0;
    printf("Enter number to display it table\n");
    scanf("%d",&iValue);

    DisplayTable(iValue);
    return 0;
}
void DisplayTable(int iNo)
{
    register int iCnt = 0;
    int iMult = 0;
    
    printf("%d Table\n",iNo);
    if(iNo == 0)
    {
        return;
    }
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
       iMult = iNo * iCnt;
        printf("%d\n",iMult);
    }
}