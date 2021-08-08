/* Write a program which accept number from user and return difference between
   summation of all its factors and non factors.

Input : 12
Output : -34 (16 - 50)
Input : 10
Output : -29 (8 - 37)
*/


#include<stdio.h>

int Diff(int iNo)
{
	int Sum=0,Sum2=0;
	if(iNo<0)
	{
	iNo=-iNo;
	}
	if(iNo==0)
	{
	printf("Invalid Input!!\n");
	}
	for(int i=1;i<iNo;i++)
	{
	if((iNo%i)==0)
	{
	Sum=Sum+i;
	}
	else
	{
	Sum2=Sum2+i;
	}
	}
	return Sum-Sum2;
}

int main()
{
	int iValue=0,iRet=0;
	printf("Enter the Number:= ");
	scanf("%d",&iValue);
	iRet=Diff(iValue);
	printf("Difference between the summation of Factors and Non-factors is := %d\n",iRet);
	return 0;
}