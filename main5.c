/* Programme Statement ---Write a program which display addition of digits of element from singly
linear linked list.
Function Prototype :int SumDigit( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 2 5 2 6 10   */




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



int AdditionofDigits(PNODE Head)
{
	int iSum=0,iRem=0;
	if(Head==NULL)
	{
		return 0;
	}
	while(Head->data!=NULL)
	{	
		iRem=(Head->data)%10;
		iSum=iSum+iRem;
		Head->data/10;
	}
		printf("%d",iSum);
		Head=Head->next;
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

//iRet=AdditionofDigits(First);
printf("Number of Nodes are :%d",iRet);

return 0;

}