/* Write a program which accept number from user and display its multiplication of factors.
Input : 12
Output : 144 (1 * 2 * 3 * 4 * 6)
Input : 13
Output : 1 (1)
Input : 10
Output : 10 (1 * 2 * 5)  */

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
int iAns=1;
if(iNo==0)
{
	printf("Invalid Input!\n");
	exit(0);
}
if(iNo<0)
{
	iNo=-iNo;    // Converts negative no into positive 
}
for(int i=1;i<iNo;i++)
{
	if((iNo%i)==0)
	{
	iAns=iAns*i;
	}
}
printf("Multplication is : %d",iAns);
}

int main()
{
	int iValue=0;
	printf("Enter the Number := ");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}