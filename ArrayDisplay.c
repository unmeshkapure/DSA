/*
    1)enter the number of elements you wanted to add in array
    2)Allocate  the memory for the elements in array
    3)Display the overall elementas in the array
    4)Write the function you wanted to add
    5)display the result and deallocated the memory


*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Reverse(int Brr[],int iSize)
{

    for(int iCnt=0;iCnt<iSize-1;iCnt++)
    {
        int temp;
        temp=Brr[iCnt];
        Brr[iCnt]=Brr[iCnt+1];
        Brr[iCnt+1]=temp;

    }
    for(int jCnt=0;jCnt<iSize;jCnt++)
    {
        printf("%d\n",Brr[jCnt]);
    }
}
void DisplayPrime(int Arr[],int iSize)
{
    int jCnt;
    printf("prime numbers are:\n");
    for(int iCnt=0;iCnt<iSize;iCnt++)
    {
        for(int jCnt=2;jCnt<(Arr[iCnt]);jCnt++)
        {
            if(Arr[iCnt]%jCnt==0)
            {
                break;
            }
          
        }
        if(Arr[iCnt]-1==jCnt)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

bool CheckNumber(int Arr[],int iSize,int iValue)
{
    bool bFlag=false;
    for(int iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iValue)
        {
            bFlag=true;
            break;
        }
    }
    return bFlag;

}





int main()
{
    int iCount=0;
    int *Brr=NULL;

    printf("enter the number of elements:");
    scanf("%d",&iCount);

    Brr=(int*)malloc(iCount*sizeof(int));

    printf("enter the elements of Array:\n");

    for(int iCnt=0;iCnt<iCount;iCnt++)
    {
        scanf("%d\n",&Brr[iCnt]);
    }

    printf("entered elements are:\n");
    for(int iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("%d\n",Brr[iCnt]);
    }

    int iNo;
    printf("enter the value to be find:\n");
    scanf("%d",&iNo);
    bool bRet=CheckNumber(Brr,iCount,iNo);
    if(bRet==true)
    {
        printf("the number is present in array");
    }
    else
    {
        printf("the number is not present in array");
    }
    
    Reverse(Brr,iCount);
    return 0;
}
