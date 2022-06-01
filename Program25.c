// Accept number from user and diplay its factors

#include<stdio.h>

void DisplayFactor(int);
int main()
{
    int iNo = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    DisplayFactor(iNo);
    return 0;
}

void DisplayFactor(int iValue)
{
    int iCnt = 0;
    if(iValue < 0)
    {
        iValue = -iValue;
    }
    for(iCnt = 1; iCnt <= (iValue/2); iCnt++)
    {
        if((iValue % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

/*
    iValue = 8

    (8 % 1 ) == 0  T
    (8 % 2 ) == 0  T
    (8 % 3 ) == 0  F
    (8 % 4 ) == 0  T
    (8 % 5 ) == 0  F
    (8 % 6 ) == 0  F
    (8 % 7 ) == 0  F

*/