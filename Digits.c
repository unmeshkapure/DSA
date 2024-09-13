#include<stdio.h>

int  ReverseNumber(int iValue)
{
    int iNum=iValue;
    int iDigit=0;
    int iRev=0;
    if(iNum<0)
    {
        iNum=-iNum;
    }

    while(iNum>0)
    {
        iDigit=iNum%10;
        iRev=iRev*10+iDigit;
        iNum=iNum/10;
    }

    return iRev;
}

int main()
{
    int iNum=0;
    printf("enter the number:");
    scanf("%d",&iNum);

    int iRet=ReverseNumber(iNum);
    printf("reversed number is:%d",iRet);


    return 0;
}