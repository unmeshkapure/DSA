#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int Data;
    struct Node *Next;
};
typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE First,int No)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->Next=NULL;
    newn->Data=No;

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        newn->Next=*First;
        *First=newn;
    }

}

void InsertLast(PPNODE First,int No)
{
    
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->Next=NULL;
    newn->Data=No;
    PNODE temp=(*First);

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
       while(temp->Next!=NULL)
       {
            temp=temp->Next;
       }
       temp->Next=newn;
    }
    
}


void DeleteFirst(PPNODE First)
{
    

    if(*First==NULL)
    {
        printf("you cannot delete as LL is empty");
    }
    else if((*First)->Next==NULL)
    {
        *First=NULL;
    }
    else
    {
        PNODE temp=*First;
        *First=(*First)->Next;
        free(temp);
    }

}

void DeleteLast(PPNODE First)
{
    
   
    PNODE temp=(*First);

    if(*First==NULL)
    {
        printf("you cannot delete as LL is empty"); 
    }
    else if((*First)->Next==NULL)
    {
      *First=NULL;
    }
    else
    {
        while(temp->Next->Next!=NULL)
       {
           temp=temp->Next;
       }
       free(temp->Next);
       temp->Next=NULL;
     
    }
    
}

void InsertAtPos(PPNODE First,int iPos,int iNo)
{
    

    int iCount=Count((*First));
    if((iPos<0)&&(iPos>iCount+1))
    {
        printf("invalid input");
    }
    else if(iPos==1)
    {
        InsertFirst(First,iNo);
    }
    else if(iPos==iCount+1)
    {
        InsertLast(First,iNo);
    }
    else
    {
        PNODE newn=NULL;
        newn=(PNODE)malloc(sizeof(NODE));
        newn->Data=iNo;
        newn->Next=NULL;
        PNODE temp=(*First);
        for(int iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->Next;
        }
        newn->Next=temp->Next;
        temp->Next=newn;
    }

}

void DeleteAtPos(PPNODE First,int iPos)
{
    

    int iCount=Count(*First);
    if((iPos<0)&&(iPos>iCount+1))
    {
        printf("invalid input");
    }
    else if(iPos==1)
    {
        DeleteFirst(First);
    }
    else if(iPos==iCount)
    {
        DeleteLast(First);
    }
    else
    {
        
        PNODE temp=(*First);
        for(int iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->Next;
        }
        PNODE temp1=temp->Next;
        temp->Next=temp->Next->Next;
        free(temp1);




    }

}

void Display(PNODE First)
{
    PNODE temp=First;
    while(temp->Next!=NULL)
    {
        printf("%d\t",temp->Data);
        temp=temp->Next;

    }
    printf("\n");
}
int Count(PNODE First)
{
    int iCount=0;
    PNODE temp=First;
    while(temp->Next!=NULL)
    {
        iCount++;
        temp=temp->Next;
    }

    return iCount;
}

int main()
{
    PNODE Head=NULL;
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);
    InsertLast(&Head,101);
    InsertLast(&Head,121);
    InsertLast(&Head,131);
    InsertFirst(&Head,1);
    InsertAtPos(&Head,3,15);
    DeleteAtPos(&Head,3);
    Display(Head);
    int iRet=Count(Head);
    printf("the number of elements is :%d\n",iRet);



    return 0;
}