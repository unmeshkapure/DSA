#include<stdio.h>
#include<stdbool.h>
bool StringFind(char *Brr,char cd)
{
    
    bool bFlag=false;
    while(*Brr!='\0')
    {
        if(*Brr==cd)
        {
            bFlag=true;
            break;
        }

        Brr++;
    }

    return bFlag;
}



int main()
{
    char ch;
    char Arr[100];

    printf("enter the string is:");
    scanf("%[^'\n']s",&Arr);

    printf("enter the character to Find:");
    scanf("  %c",&ch);

    bool bRet=StringFind(Arr,ch);
    if(bRet==true)
    {
        printf("the given character is present in the string");
    }
    else
    {
        printf("the given character is absent in the string");
    }


}