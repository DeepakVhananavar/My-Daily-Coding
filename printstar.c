// Accept one number from user and print that number of * on screen

#include<stdio.h>

void Display(int ino)
{
	if(ino < 0)
	{
		ino=-ino;
	}
	if(ino==0)
	{
		printf("Invalid Input !!");
	}
	else
	{
		for(int i=1;i<=ino;i++)
		{
		printf("*\n");
		}
	}
}

int main()
{
	int iValue=0;
	printf("Enter the Number : = ");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}