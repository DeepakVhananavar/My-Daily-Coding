//Accept on number from user if number is less than 10 then print “Hello” otherwise print “Demo”.

// How to apply Conditions

#include<stdio.h>

void Display(int ino)
{
	if(ino<0)
	{
	ino=-ino;
	}
	if((ino<=10))
	{
	printf("Hello Deepuu!!");
	}
	else
	{
	printf(" Wonderfull Day deepzz!!");
	}
}

int main()
{
	int iValue=0;
	printf("Enter the Number : =");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}