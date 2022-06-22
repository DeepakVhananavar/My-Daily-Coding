/* Programme Statement---Write a program which return second maximum element from singly linear
linked list.
Function Prototype :int SecMaximum( PNODE Head);
Input linked list : |110|->|230|->|320|->|240|
Output : 240     */



          
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

int Count(PNODE Head)
{
	int iCnt=0;
	while(Head!=NULL)
	{
		iCnt++;
		Head=Head->next;
	}
	return iCnt;
	
}

int SecMaximum(PPNODE Head)
{
	int first=0,second=0;
	int Cnt=0;
	Cnt=Count(Head);
	if(Cnt<2)
	{
		printf("ERROR:Invalid ip no Nodes to Compare");
		return 0;
	}
	for(i=1;i<=iCnt;i++)
	{
		if((Head->data)>first)
		{
			second=first;
			first=Head->data;
		}
		else if((Head->data)>second)
		{
			second=Head->data;
		}
		Head=Head->next;
	}
	return second;
}


int main()
{
int iNo=0,iRet=0,iAns=0;
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
printf("Number of Nodes are :%d",iRet);

iAns=SecMaximum(&First);
printf("Second largest no is:%d",iAns);
return 0;

}