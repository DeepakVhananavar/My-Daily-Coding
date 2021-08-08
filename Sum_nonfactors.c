/*4.Write a program which accept number from user and return summation of all its
non factors.
Input : 12
Output : 50
Input : 10
Output : 37  */



#include<stdio.h>

int Sum_nonfactors(int iNo)
{	
	int Sum=0;
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
	if((iNo%i)!=0)
	{
	Sum=Sum+i;
	}
	}
	return Sum;
}

int main()
{
	int iValue=0,iRet=0;
	printf("Enter the Number:= ");
	scanf("%d",&iValue);
	iRet=Sum_nonfactors(iValue);
	printf("The Summation of Non Factors is :=%d\n",iRet);
}