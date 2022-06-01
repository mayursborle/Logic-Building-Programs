#include<stdio.h>
void Display(int iValue)
{
    register int i = 0;
    if(iValue == 0)
    {
        printf("Your value is 0\n");
        return;
    }
    if(iValue < 0)
    {
        iValue = -iValue;
    }
    for(i = iValue; i > 0; i--)
    {
        printf("%d\n",i);
    }
}
int main()
{
    int iNo = 0;
    printf("Enter number\n");
    scanf("%d",&iNo);

    Display(iNo);
    return 0;
}