// Enter number from user and Display Output

//Input   : 3 
// Output : 1 2 3 

//Input   : 7 
// Output : 1 2 3 4 5 6 7  

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
     int i = 0;
    for(i = 1; i<= iValue; i++)
    {
        printf("%d \n",i);
    }
}