

/*  Programm Statement --Write a program which accept one number from user and toggle 7th and
10th bit of that number. Return modified number.
Input : 137
Output : 713   */

#include<stdio.h>
typedef unsigned int UNIT;


UNIT CheckOn(UNIT iNo ,int iPos1,int iPos2)
{
int iMask=0X00000001;
int iMask2=0X00000001;
int iRet=0,iResult=0;
if((iPos1<1) || (iPos1 > 32) && (iPos2<1) || (iPos2>32))
{
return 0;
}
iMask=iMask <<(iPos1-1);
iResult=iNo  ^ iMask;
iMask2=iMask2 <<(iPos2-1);
iRet=iResult ^iMask2;
return iRet;
}


int main()
{
UNIT iValue=0;
int iPos1=0;
int iPos2=0;
int iRet=0;
printf("Enter the Number:");
scanf("%u",&iValue);
printf("Enter the Position1:\t");
scanf("%d",&iPos1);
printf("Enter the Position2:\t");
scanf("%d",&iPos2);
iRet=CheckOn(iValue,iPos1,iPos2);
printf("Modified Bit is:%d",iRet);
return 0;
}