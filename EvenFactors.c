//Write a program which accept number from user and print factors of that number.
//Input : 24
//Output: 1 2 4 6 8 12

#include<stdio.h>

void Display(int iNo)
{
	int i=1;
if(iNo<0)								// Filter to convert negative numbers to positive
{
iNo=-iNo;	
}									// Time complexity is less than do while loop(n-1)
									/*
									for(int i=1;i<iNo;i++)
										{
											if((iNo%i)==0)
												{
												printf("%d\t",i);
												}
										}    */

do{										// in do while loop the loop by default goes once in the loop if ip is 0 then also
	if((iNo%i)==0)
		{
		printf("%d\t",i);

		}
		i++;
	}while(i<iNo);
}

int main()
{
	int iValue=0;
	printf("Enter the Number to print its  Factors := ");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}