/* Write a program which checks whether 1st and last  bit is On or OFF i.e 1st bit 
and 32th bit.*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0


BOOL CheckOn(UNIT iNo)
{
int iResult=0;
int iMask=0X80000001;
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
printf("1st and 32th bit is On\n");
}
else
{
printf("one of the Bit is off or all bits are off");
}
return 0;
} 
