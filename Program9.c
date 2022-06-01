// Display # 5 times on screen

#include<stdio.h>

void Display();
int main()
{
    Display();
    return 0;
}
void Display()
{
    register int i = 0;
    for(i = 1; i<= 8; i++)
    {
        printf("#\n");
    }
}