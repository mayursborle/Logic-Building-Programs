#include<stdio.h>
#include<stdbool.h>

bool ChkPallindrome(int);
int Reverse(int);

int main()
{
    int iValue = 0;
    bool iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = ChkPallindrome(iValue);

    if(iRet == true)
    {
        printf("Number is pallindrome\n");
    }
    else
    {
        printf("Number is not pallindrome\n");
    }
}
bool ChkPallindrome(int iInput)
{
    int iNumber = Reverse(iInput);
   
    if(iInput == iNumber)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int Reverse(int iNo)
{
    int iDigit = 0,iRev = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo/10;
    }
    return iRev;
}