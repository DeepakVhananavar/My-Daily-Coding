/* Program Statement --Write a program which returns addition of all element from singly linear
linked list.
Function Prototype :int Addition( PNODE Head);
Input linked list : |10|->|20|->|30|->|40|
Output : 100   */


#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insert(PPNODE Head,int iNo)   // To only insert elemnts in List in any way.
{
PNODE newn=NULL;
PNODE temp;
newn=(PNODE)malloc(sizeof(NODE));
	newn->data=iNo;     // initialize data
	newn->next=NULL;    //initialize Pointer
	
	if(*Head==NULL)              // jr PT sir cha dokyaat 1pn nav or No lakshat nasel
	{
		*Head=newn;
	}
	
	else                  // (Linked List) Line  madhi 1 ani 1 Peksha jast mulaa ahet tr
 	{                                //Same as Enter at Last in Linked List cha Function
	 temp=*Head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
		temp->next=newn;
	}
}

int Addition(PNODE Head)
{
	int temp=0;
	while(Head!=NULL)
	{
		temp=temp+Head->data;
		Head=Head->next;
	}
	return temp;
}


void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("%d\t",Head->data);
		Head=Head->next;
	}
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
	iRet=Addition(First);
	printf("\nAddition is%d\n",iRet);
	return 0;
	}