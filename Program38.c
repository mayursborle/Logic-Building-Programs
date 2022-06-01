
#include<stdio.h>
#include<stdbool.h>

 bool ChkPalindrome(int);
int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter nunber\n");
    scanf("%d",&iValue);

    bRet = ChkPalindrome(iValue);

    if(bRet == true)
    {
        printf("%d number is palindrome\n",iValue);
    }
    else
    {
        printf("%d number is not palindrome\n",iValue);
    }
    return 0;
}

bool ChkPalindrome(int iNo)
{
    int iDigit = 0,iRev = 0;
    int iTemp = iNo;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo/10;
    }
    if(iTemp == iRev)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}