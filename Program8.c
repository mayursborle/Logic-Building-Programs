#include<stdio.h>

void Display();     //Declaration
int main()
{
    Display();      //Function Call
    return 0;
}
void Display()      //Defination
{
    register int i = 0;
    for ( i = 1; i <= 5; i++)
    {
        printf("%d\n",i);
    }
    
}