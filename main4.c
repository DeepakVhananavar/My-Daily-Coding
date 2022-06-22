/* Program Statement -- Write a program which return largest element from singly linear linked
list.
Function Prototype :int Maximum( PNODE Head);
Input linked list : |110|->|230|->|320|->|240|
Output : 320   */


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


void Insert(PPNODE Head,int iNo)
{
PNODE newn=NULL;
PNODE temp;
newn =(PNODE)malloc(sizeof(NODE));
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


int LargestNo(PNODE Head)
{
int temp=0;
temp=Head->data;

while(Head!=NULL)
{

if((Head->data)>temp)
temp=Head->data;
Head=Head->next;
}
return temp;
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
	
	iRet=LargestNo(First);
	printf("\nLargest no:=%d\n",iRet);
	return 0;
}

