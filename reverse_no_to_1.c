//Write a program to accept a number from user and print reverse  number series upto 0

#include<stdio.h>           // Header File used for io func

void Display(int no)
{
if(no<0)
{
	no=-no;
}
if(no==0)
{
	printf("no is at last position already!!\n");
}
else
{
	for(int i=no;i>=1 ; i--)
	{
		printf("%d\n",i);
		
	}
}

}

int main()
{
	int ino=0;
	printf("Enter the Number to print reverse series upto 1 :=");
	scanf("%d",&ino);
	Display(ino);
	return 0;
}