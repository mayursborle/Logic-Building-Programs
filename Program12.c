#include<stdio.h>
void Display(int);
int main()
{
    int iNo = 0;
    printf("Enter number\n");
    scanf("%d",&iNo);
    Display(iNo);
    return 0;
}
void Display(int iValue)
{
    register int i = 0;
    for(i = 1; i<= 5; i++)
    {
        printf("Marvellous\n");
    }
}