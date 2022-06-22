/* Program Statement ---2. Write a program which search last occurrence of particular element from
singly linear linked list.
Function should return position at which element is found.
Function Prototype :int SearchLastOcc( PNODE Head, int no );
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element : 30
Output : 6   */


#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insert(PPNODE Head ,int iNo)
{
PNODE newn=NULL;
PNODE temp;

newn=(PNODE)malloc(sizeof(NODE));
newn->data=iNo;
newn->next=NULL;

if(*Head==NULL)
{
*Head=newn;
}
else
{
 temp=*Head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
		temp->next=newn;
	}
}

void Display(PNODE Head)
{
while(Head!=NULL)
{
printf("%d\t",Head->data);
Head=Head->next;
}
}

int SearchLastOcc(PNODE Head,int iNo)
{
int iCnt=0;
while(Head!=NULL)
{
if((Head->data)==iNo)
{
iCnt++;
}
Head=Head->next;
}
return iCnt;
}

int main()
{

int iValue=0;
	int iRet=0;
	PNODE First=NULL;   //Sir ni pahilya mulacha no lakshat thevlela node cha address
	Insert(&First,70);
	Insert(&First,30);
	Insert(&First,50);
	Insert(&First,40);
	Insert(&First,30);
	Insert(&First,20);
	Insert(&First,10);
	Display(First);
	printf("\nEnter No to Search\n");
	scanf("%d",&iValue);
	
	iRet=SearchLastOcc(First,iValue);
	printf("\nNo found at pos is:=%d\n",iRet);
	return 0;
}




