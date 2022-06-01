// Accept number from user and check it even or not 

#include<stdio.h>   // For printf and scanf 
#include<stdbool.h> // For bool datatype

bool CheckEven(int);  // Declaration
int main()
{
    int iNo = 0;
    bool iRet = false;

    printf("Enter number\n");
    scanf("%d",&iNo);

    iRet = CheckEven(iNo);  // Function call
    if(iRet == true)
    {
        printf("%d is even number\n",iNo);
    }
    else
    {
        printf("%d is not even number\n",iNo);
    }

    return 0;
}
bool CheckEven(int iValue)  // Defination
{
    if((iValue % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}