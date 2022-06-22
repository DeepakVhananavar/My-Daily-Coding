/*Programme Statement --Write a program which displays all elements which are perfect from singly
linear linked list.
Function Prototype :int DisplayPerfect( PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : 6 28   */



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


int Count(PNODE Head)
{
int iCnt=0;
if(Head==NULL)
{
return 0;
}
else
{
while(Head!=NULL)
{
iCnt++;
Head=Head->next;
}
}
return iCnt;
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

void DisplayPerfect(PNODE Head)
{
	int i=0,sum=0,rem=0;
	int size=0;
	if(Head==NULL)
	{
		return;
	}
	size=Count(Head);
	while(Head!=NULL)
	{
		for(i=1;i<Head->data;i++)
		{
			rem=(Head->data)% i;
			if(rem==0)
			{
				sum=sum+i;
			}
		}
		if(sum==(Head->data))
		{
			printf("%d",Head->data);
		}
		Head=Head->next;
	}
	
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
iRet=Count(First);
printf("\nNumber of nodes are:%d",iRet);
DisplayPerfect(First);
return 0;

}