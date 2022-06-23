/* Write a program which checks whether 5th & 18th bit is On or OFF.*/

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckOn(int iNo)
{
	int iResult=0;
int iMask=0X00020010;
if(iNo<0)
{
iNo=-iNo;
}

iResult=iNo & iMask;

if(iResult== iMask)
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

BOOL bRet=0;
printf("Enter the Number ");
scanf("%d",&iValue);
bRet=CheckOn(iValue);
if(bRet==TRUE)
{
printf("The 15th and 18th Bit is On");
}
else
{
printf("Maye be one Bit is off or both 15th and 18th Bit is Off");
}
return 0;
}