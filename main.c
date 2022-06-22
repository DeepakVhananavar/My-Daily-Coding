/* Programme Statement -- Doubly Circluar Linked List using all Functions    */


#include<stdio.h>
#include<stdlib.h>                     // malloc Function sathi

struct Node
{
struct Node *next;
struct Node *prev;
int data;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;


void InsertFirst(PPNODE Head,PPNODE Tail,int iNo)
{
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));
newn->data=iNo;
newn->next=NULL;
newn->prev=NULL;

if((*Head==NULL)&& (*Tail==NULL))
{
*Head=newn;
*Tail=newn;
}

else
{
newn->next=(*Head);
(*Head)->prev=newn;
(*Head)=newn;
}
(*Tail)->next=(*Head);
(*Head)->prev=(*Tail);
}

void InsertLast(PPNODE Head,PPNODE Tail,int iNo)
{
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));
newn->data=iNo;
newn->next=NULL;
newn->prev=NULL;

if((*Head==NULL)&& (*Tail==NULL))
{
*Head=newn;
*Tail=newn;
}

else
{
	(*Tail)->next=newn;
	newn->prev=(*Tail);
	(*Tail)=newn;
}
(*Head)->prev=(*Tail);
(*Tail)->next=(*Head);
}

void DeleteFirst(PPNODE Head,PPNODE Tail)
{
	if((*Head==NULL) && (*Tail==NULL))
	{
		return;
	}
	else if((*Head)==(*Tail))
	{
		free(*Head);
		(*Head)=NULL;
		(*Tail)=NULL;
	}
	else 
	{
		(*Head)=(*Head)->next;
		free((*Head)->prev);                 // free(*Tail)->next);
	}
	(*Head)->prev=(*Tail);
	(*Tail)->next=(*Head);
	
}

void DeleteLast(PPNODE Head,PPNODE Tail)
{
	PNODE temp=*Head;
	
	if(((*Head)==NULL) && (*Tail)==NULL)
	{
		return;
	}
	
	// asa pn kru shakto pn circular linked list madi travel krychi graj nhi padli pahije
		/*   while(temp->next->next!=(*Head))
		{
		temp=temp->next;
		}
		free(temp->next);
		(*Tail)=temp;
		}   */
	
	else
	{
		*Tail=(*Tail)->prev;
		free((*Tail)->next);                // free(*Head->prev);   asa pn lehu shakto
 	}		
													
	(*Head)->prev=(*Tail);
	(*Tail)->next=(*Head);
}



int Count(PNODE Head,PNODE Tail)
{
int iCnt=0;
if((Head == NULL) && (Tail == NULL))
{
return 0;
}
do
{
iCnt++;
Head = Head -> next;
}
while(Head != Tail -> next);
{
	printf("NULL\n");
}
return iCnt;
}


void InsertatPos(PPNODE Head,PPNODE Tail,int iNo,int iPos) // exactly same as doubly linked list
{	
	int count=0;
	int i=0;
	PNODE temp;	
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=iNo;
	newn->next=NULL;
	newn->prev=NULL;
	
	count=Count(*Head,*Tail);
	
	if((*Head==NULL) && (*Tail==NULL))
	{
		*Head=newn;
		*Tail=newn;
	}
	
	if((iPos<0) && (iPos>count+1))
	{
		return;
	}
	
	if(iPos==1)
	{
		InsertFirst(Head,Tail,iNo);
	}
	else if(iPos==count+1)
	{
		InsertLast(Head,Tail,iNo);
	}
	
	else
	{	temp=*Head;
		for(i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		
        newn->next = temp->next;
        temp->next->prev = newn;
        
        temp->next = newn;
        newn->prev = temp;

	}
	(*Head)->prev=(*Tail);
	(*Tail)->next=(*Head);	
}

void DeleteatPos(PPNODE Head,PPNODE Tail,int iPos)   // exactly same as doubly linked list
{
	int size=0,i=0;
	PNODE temp,temp2;
	
	size=Count(*Head,*Tail);
	
	if((iPos<0) && (iPos>size+1))
	{
		return;
	}
	else if(iPos==1)
	{
		DeleteFirst(Head,Tail);
	}
	else if(iPos==size+1)
	{
		DeleteLast(Head,Tail);
	}
	
	else
	{
		temp=(*Head);
		for(i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		temp->next=temp->next->next;
		free(temp->next->prev);
		temp->next->prev=temp;
		
		/*      varti je kelay tasa pn kru shkto ya logic peksha
				temp2=temp->next;
		        temp->next=temp2->next;
		        temp2->prev=temp;
		        free(temp2);              */
	}
	//(*Head)->prev=(*Tail);
	//(*Tail)->next=(*Head);
}







void Display(PNODE Head, PNODE Tail)
{
if((Head == NULL) && (Tail == NULL))
{
return;
}
do
{
printf("|%d| <=> ",Head->data);
Head = Head -> next;
}
while(Head != Tail -> next);
{
	printf("NULL\n");
}
}


int main()
{
int iNo=0,iPos=0;
int iRet=0;
PNODE First=NULL;
PNODE Last=NULL;       

// Insert First  krtoy
printf("Enter the Number:\n");
scanf("%d",&iNo);
InsertFirst(&First,&Last,iNo);


printf("Enter the Number:\n");
scanf("%d",&iNo);
InsertFirst(&First,&Last,iNo);


printf("Enter the Number:\n");
scanf("%d",&iNo);
InsertFirst(&First,&Last,iNo);

Display(First,Last);
// Insert Last krtoy
printf("Enter the Number:\n");
scanf("%d",&iNo);
InsertLast(&First,&Last,iNo);
Display(First,Last);

// Delete First krtoy 
DeleteFirst(&First,&Last);
Display(First,Last);

// Delete Last

DeleteLast(&First,&Last);
Display(First,Last);

//Count kraa

iRet=Count(First,Last);
printf("Number of nodes are:%d",iRet);

// Parat insert first krtoy

printf("\nEnter the Number\n");
scanf("%d",&iNo);
InsertFirst(&First,&Last,iNo);

printf("Enter the Number:\n");
scanf("%d",&iNo);
InsertFirst(&First,&Last,iNo);


printf("Enter the Number:\n");
scanf("%d",&iNo);
InsertFirst(&First,&Last,iNo);

Display(First,Last);
// Insert at Posistion krtoy 
printf("Enter the Number:\n");
scanf("%d",&iNo);
printf("\nEnter the Position to insert no:");
scanf("%d",&iPos);
InsertatPos(&First,&Last,iNo,iPos);
Display(First,Last);
// Delete at Posistion
printf("Enter the position to delete:\n");
scanf("%d",&iPos);
DeleteatPos(&First,&Last,iPos);
Display(First,Last);

return 0;
}