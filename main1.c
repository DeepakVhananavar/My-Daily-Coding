/* Program Statement ---Write a program which search first occurrence of particular element from
singly linear linked list.
Function should return position at which element is found.
Function Prototype :int SearchFirstOcc( PNODE Head , int no );
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element : 30
Output : 3   */

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

void InsertFirst(PPNODE Head,int iNo)
{
	PNODE newn=NULL;                  // navin mulacha hatt khalli thevla
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=iNo;     // initialize data
	newn->next=NULL;    //initialize Pointer
	
	if(*Head==NULL)              // jr PT sir cha dokyaat 1pn nav or No lakshat nasel
	{
		*Head=newn;
	}
	
	else                  // (Linked List) Line  madhi 1 ani 1 Peksha jast mulaa ahet tr
	{
	newn->next=*Head;
	*Head=newn;
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

int SearchFirstOcc(PNODE Head,int iNo)
{
	int pos=1;
	
	if(Head==NULL)
	{
	return 0;
	}
	while(Head!=NULL)
	{
		if(Head->data==iNo)
		{
			return pos;
			return 0;
		}
		Head=Head->next;
		pos++;
	}
	//return pos;
}

int main()
{
	int iValue=0;
	int iRet=0;
	PNODE First=NULL;   //Sir ni pahilya mulacha no lakshat thevlela node cha address
	InsertFirst(&First,70);
	InsertFirst(&First,30);
	InsertFirst(&First,50);
	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);
	Display(First);
	printf("\nEnter no to Find 1st occurence\n");
	scanf("%d",&iValue);
	iRet=SearchFirstOcc(First,iValue);
	printf("No found at pos %d\n",iRet);
    
	return 0;
}
