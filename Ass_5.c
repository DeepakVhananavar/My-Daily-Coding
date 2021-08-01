// Accept number from user and check whether number is even or odd.

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckEven(int ino)
{
	if(ino<0)
	{
	ino=-ino;
	}
	if((ino %2 )==0)
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
	int iValue=0;
	BOOL bRet=FALSE;
	printf("Enter the Number := ");
	scanf("%d",&iValue);
	bRet=CheckEven(iValue);
	if(bRet==TRUE)
	{
	printf("The Number is Even\n");
	}
	else
	{
	printf("The Number is Odd\n");
	}
	return 0;
}