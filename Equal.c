/*  Write a program which accept two numbers and check whether numbers are
equal or not.
Input : 10 10
Output : Equal
Input : 10 12
Output : Not Equal
Input : 10 -10
Output : Not Equal  */

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Equal(int iNo1,int iNo2)
{
if((iNo1-iNo2)==0)
{
	return TRUE;
}
else
{
return FALSE;
}
}

int main()
{
	int iValue=0,iValue2=0;
	BOOL bRet=FALSE;
	printf("Enter the Two nmbers to check :=");
	scanf("%d\t%d",&iValue,&iValue2);
	bRet=Equal(iValue,iValue2);
	if(bRet==1)
	{
	printf("The Numbers are Equall\n");
	}
	else
	{
	printf("The Numbers are Not Equall\n");
	}
	return 0;
}