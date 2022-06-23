/*program Statement -Write a program which accept one number from user and off 7th bit of that
number if it is on. Return modified number.
Input : 79
Output : 15   */

#include<stdio.h>
typedef unsigned int UNIT;

UNIT OffBit(UNIT iNo)
{
int iMask=0X000000BF;
int iResult=0;
iResult=iNo & iMask;
return iResult;

}


int main()
{
int iRet=0;
UNIT iValue=0;
printf("Enter the Number ");
scanf("%u",&iValue);
iRet=OffBit(iValue);
printf("Modified number is %d",iRet);
return 0;
}