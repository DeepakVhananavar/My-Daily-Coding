// Program to know no is greater than 100 or not.

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int ino)
{
	
	if(ino<=100)
	{
		return FALSE;
	}
	else
	{
	return TRUE;
	}
	
	

}

int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	printf("Please Enter Number\n");
	scanf("%d",&iValue);
	bRet=ChkGreater(iValue);
	if(bRet==TRUE)
	{
		printf("Greater");
	}
	else
	{
		printf("Smaller");
	}
	return 0;
}