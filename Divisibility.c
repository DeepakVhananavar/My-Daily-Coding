//Accept one number and check whether is is divisible by 5 or not

#include<stdio.h>             // Header File used for io functions

#define TRUE 1               // User Defied Macro
#define FALSE 0
typedef int BOOLEAN;         //New Datatype as BOOLEAN treated as int 

BOOLEAN Check(int ino)          //Function Defination
{	
	if(ino==0)
	{printf("Invalid  Number !! ");}
	
	if(ino < 0)					// Filter to convert negative no to positive no.
	{
	ino=-ino;
	}
	if((ino % 5 )==0)			// if remainder is 0 return true
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
	BOOLEAN bRet=FALSE;
	printf("Enter the Number:= ");
	scanf("%d",&iValue);
	bRet=(Check(iValue));
	if(bRet==1)
	{
	printf("The number is Disvisible by 5\n");
	}
	else
	{
	printf("The number is not Divisibe by 5\n");
	}
	return 0;
}