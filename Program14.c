// Enter number from user and Display Output

//Input   : 3
// Output : 1 2 3

//Input   : 7
// Output : 1 2 3 4 5 6 7

#include <stdio.h>
void Display(int);
int main()
{
    int iNo = 0;
    printf("Enter number\n");
    scanf("%d", &iNo);
    Display(iNo);
    return 0;
}
void Display(int iValue)
{
    register int i = 0;
    if (iValue == 0)
    {
        printf("Your entered number is 0\n");
        return;
    }

    if (iValue < 0)
    {
        iValue = -iValue;
    }
    for (i = 1; i <= iValue; i++)
    {
        printf("%d \n", i);
    }
}