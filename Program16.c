// Accept number from user and print it reverse order

// Input : 3
// Output: 3 2 1

// Input : 5
// Output: 5 4 3 2 1

#include<stdio.h>

void Display(int);      //Declaration
int main()

{
    auto int iNo = 0;
    printf("Enter number\n");
    scanf("%d",&iNo);

    Display(iNo);       //Function Call
    return 0;
}

void Display(int iValue)    //Defiination
{
    register int i = 0;
    for(i = iValue; i >= 1; i--)
    {
        printf("%d\n",i);
    }
}