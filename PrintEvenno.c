//Write a program which accept one number from user and print that number of even numbers on screen.
//Input : 7
//Output: 2 4 6 8 10 12 14

#include<stdio.h>

void PrintEven(int iNo)
{
	int i=1,icnt=0;
	if(iNo<0)
	{
	iNo=-iNo;
	}

	do
	{
		if((i%2)==0)
		{
			printf("%d\t",i);
			icnt++;
		}
		i++;
		
	} while (icnt<iNo);
}

int main()
{
	int iValue=0;
	printf("Enter the Number := ");
	scanf("%d",&iValue);
	PrintEven(iValue);
	return 0;
}