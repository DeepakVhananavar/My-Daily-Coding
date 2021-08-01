//Write a program which accept number from user and print even factors of that number.
//Input : 36
//Output: 2 6 12 18

#include<stdio.h>

void Display(int iNo)
{

if(iNo<0)
{
	iNo=-iNo;
}
for(int i=1;i<iNo;i++)
{
	if(((iNo%i)==0)&&(i%2==0))
	{
		printf("%d\t",i);
	}
}

}

int main()
{
	int iValue=0;
	printf("Enter the Number to print Even Factors := ");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}