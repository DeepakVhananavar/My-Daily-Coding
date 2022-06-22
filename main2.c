/*Programme Statement--Write a program which displays all elements which are prime from singly
linear linked list.
Function Prototype :int DisplayPrime( PNODE Head);
Input linked list : |11|->|20|->|17|->|41|->|22|->|89|
Output : 11 17 41 89   */



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

void DisplayPrime(PNODE Head)
{
	if(Head==NULL)
	{
	return;
	}
	
	while(Head!=NULL)
	{
	if((Head->data)%2==1)
	{
	printf("%d\t",Head->data);
	//Head=Head->next;
	}
	Head=Head->next;
	}
}


int main()
{
int iNo=0;
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
DisplayPrime(First);
return 0;

}