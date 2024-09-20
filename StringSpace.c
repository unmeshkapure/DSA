#include<stdio.h>
int StringSpace(char *Brr)
{
    int iCnt=0;
    while(*Brr!='\0')
    {
        if(*Brr==' ')
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

    int iRet=StringSpace(Arr);
    printf("entered string has space:%d",iRet);

    return 0;
}