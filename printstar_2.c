//Accept one number from user and print that number of * on screen

#include<stdio.h>

void Display(int ino)
{	
	int i=1;
	if(ino<0)
	{
	ino=-ino;
	}
	if(ino==0)
	{
	printf("Invalid Input!!");
	}
	while(ino>=i)      // To reduce Time Complexity we can use While loop instead of for loop
	{
	printf("*\n");
	ino--;
	}
}

int main()
{
	int iValue=0;
	printf("Enter the Number : =\n");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}