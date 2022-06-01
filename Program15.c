// print number in reverse order

#include<stdio.h>
void Display()
{
    register int i = 0;
    for(i = 5; i > 0; i--)
    {
        printf("%d\n",i);
    }
}
int main()
{
    Display();
    return 0;
}