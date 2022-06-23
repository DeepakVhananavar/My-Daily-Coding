/* Write a program which checks whether 7th 15th 21st & 28th bit is On or OFF.*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT;
#define TRUE 1
#define FALSE 0

BOOL CheckOn(UNIT iNo)
{
	int iResult=0;
int iMask=0X08104040;

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

UNIT iValue=0;

BOOL bRet=0;
printf("Enter the Number ");
scanf("%u",&iValue);
bRet=CheckOn(iValue);
if(bRet==TRUE)
{
printf("The 7th 15th 21st  and 28th Bit is On");
}
else
{
printf("Maye be one Bit is off or All Bits is Off");
}
return 0;
}