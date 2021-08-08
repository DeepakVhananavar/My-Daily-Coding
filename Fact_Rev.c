/* Write a program which accept number from user and display its factors in
decreasing order.
Input : 12
Output : 6 4 3 2 1  

Input : 13
Output : 1

Input : 10
Output : 5 2 1     */



#include<stdio.h>

void Fact_rev(int ino)
{	
	int rev=1;
	if(ino<0)
	{
	ino=-ino;   // filter for converting negative no to positive
	}
	if(ino==0)
	{
	printf("Invalid Input!");
	}
	for(int i=ino-1 ; i<=ino ; i--)
	{
	if((ino%i)==0)
	{
	printf("%d\t",i);
	}
	}
}

int main()
{
	int iValue=0;
	printf("Enter the Number := ");
	scanf("%d",&iValue);
	Fact_rev(iValue);
	return 0;
}


											




