// C program to print your name n times on the screen.

#include<stdio.h>       // Header File used for io func

char Display(char *name, int no)
{	
	if(no<0)  // filter for coverting negative no to positive no.
	{
		no=-no;
	}
	for(int i=1 ; i<=no ;i++)
	{
		printf("%s\n",name);
	}
}

int main()
{
	char name[30]={'\0'};
	int n=0;
	printf("Enter the name to print\n");
	scanf("%[^'\n']s",name);
	printf("Enter how many times you want to print\n");
	scanf("%d",&n);
	Display(name,n);
	 return 0 ;
}