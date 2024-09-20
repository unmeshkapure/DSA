#include<stdio.h>

int StrLenX(char *Brr)
{
    int iCnt=0;
    while(*Brr!='\0')
    {
        iCnt++;
        Brr++;
    }


    return iCnt;
}

int StringSmall(char *Brr)
{
    int iCnt=0;
    while(*Brr!='\0')
    {
        if((*Brr>='a')&&(*Brr<='z'))
        {
            iCnt++;
        }
        Brr++;
    }

    return iCnt;
}

int StringCapital(char *Brr)
{
    int iCnt=0;
    while(Brr!='\0')
    {
        if((Brr>='A')&&(Brr<='Z'))
        {
            iCnt++;
        }
        Brr++;
    }

    return iCnt;
}



int main()
{
    char Arr[100];
    printf("enter the string:");
    scanf("%[^'\n']s",&Arr);

    int iRet=StrLenX(Arr);
    printf("the number of characters in string is:%d",iRet);

    return 0;
}