

#include<stdio.h>

int main()
{
    int Arr[5]; // Array of five integer 
    int iSum = 0;

    printf("Enter numbers\n");

    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);

    iSum = Arr[0]+Arr[1]+Arr[2]+Arr[3]+Arr[4];

    printf("Addtion is : %d\n",iSum);

    return 0;
}