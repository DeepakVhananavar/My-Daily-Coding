/* Write a program which checks whether 7th 8th & 9th bit is On or OFF.*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0


BOOL CheckOn(UNIT iNo)
{
int iResult=0;
int iMask=0X000001C0;
iResult=iNo & iMask;
if(iResult==iMask)
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
BOOL bRet=FALSE;
printf("Enter the Number");
scanf("%u",&iValue);
bRet=CheckOn(iValue);
if(bRet==TRUE)
{
printf("7th 8th and 9th bit is On\n");
}
else
{
printf("one of the Bit is off or all bits are off");
}
return 0;
} 
