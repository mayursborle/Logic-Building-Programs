//Header file inclusion
#include<stdio.h>
void Display();	// Function Declaration
int main()		//Entry point function
{
	
	Display();		//Function call
	return 0;
}

void Display()	//Function Defination
{
	//Local variable
	int iNo = 7521;
	int iDigit = 0;
	
	iDigit = iNo % 10;	//1
	printf("%d\n",iDigit);	//1
	iNo = iNo / 10;	//752
	
	iDigit = iNo%10;	//2
	printf("%d\n",iDigit);	//2
	iNo = iNo / 10;	//75
	
	iDigit = iNo%10;	//5
	printf("%d\n",iDigit);	//5
	iNo = iNo / 10;
	
	iDigit = iNo%10;	//7
	printf("%d\n",iDigit);	//7
	iNo = iNo/10;	//0
	
	
	
}
