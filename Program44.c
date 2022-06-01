#include<stdio.h>
#include<math.h>

int Power(int,int);
void power1(int ,int);
int main()
{
    int iValue1=0,iValue2=0,iRet=0;
    printf("Enter first number\n");
    scanf("%d",&iValue1);
    printf("Enter second number\n");
    scanf("%d",&iValue2);

    //iRet = Power(iValue1, iValue2);
    power1(iValue1, iValue2);

    printf("%d\n",iRet);
    return 0;
}
int Power(int x, int y)
{
    register int iCnt = 0;
    int iMult = 1;
    if(x < 0)
    {
        x = -x;
    }
    if(y < 0)
    {
        y = -y;
    }
    if(x == 0 && y == 0)
    {
        return 0;
    }
    for(iCnt = 1; iCnt <= y; iCnt++)
    {
       iMult = iMult * x;
    }
    return iMult;
}
void power1(int x, int y)
{
    int Power = 0;
    Power = pow(x, y);
    printf("%d\n",Power);
}