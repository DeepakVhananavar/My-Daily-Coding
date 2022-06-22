/*Programme Statement ---Write a program which returns addition of all even element from singly
linear linked list.
Function Prototype :int AdditionEven( PNODE Head);
Input linked list : |11|->|20|->|32|->|41|
Output : 52    */




#include<stdio.h>
#include<stdlib.h>

struct Node
{
struct Node *next;
int data;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;


void InsertFirst(PPNODE Head,int iNo)
{
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));
newn->data=iNo;
newn->next=NULL;

if(*Head==NULL)
{
*Head=newn;
}
else
{
newn->next=*Head;
*Head=newn;
}
}

void Display(PNODE Head)
{
if(Head==NULL)
{
return;
}
else
{
while(Head!=NULL)
{
printf(" |%d|=>",Head->data);
Head=Head->next;
}
}
printf("NULL\n");
}

int AdditionEven(PNODE Head)
{
int sum=0;
if(Head==NULL)
{
return 0;
}
while(Head!=NULL)
{
if((Head->data)%2==0)
{
sum=sum+Head->data;
}
Head=Head->next;
}
return sum;
}


int main()
{
int iNo=0,iRet=0;
PNODE First=NULL;
printf("\nEnter the Number:=\n");
scanf("%d",&iNo);
InsertFirst(&First,iNo);

printf("\nEnter the Number:=\n");
scanf("%d",&iNo);
InsertFirst(&First,iNo);

printf("\nEnter the Number:=\n");
scanf("%d",&iNo);
InsertFirst(&First,iNo);

Display(First);
iRet=AdditionEven(First);
printf("Addition of Even elemnts is:%d",iRet);

return 0;

}