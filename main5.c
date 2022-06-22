/* Programe Statement ---Write a recursive program which accept number from user and return its
product of digits.
Input : 523
Output : 30    */


#include<stdio.h>


int Mult(int iNo)
{
static int iDigit=0;
static int iMult=1;
if(iNo==0)
{
return 0;
}
 if(iNo>0)
 {
 	iDigit=iNo%10;
 	if(iDigit!=0)
 	{

 	iMult=iMult*iDigit;
 	}
 	iNo=iNo/10;
 	Mult(iNo);
}
return iMult;
}
int main()
{
int iValue=0;
int iRet=0;
printf("\nEnter the Number:=");
scanf("%d",&iValue);
iRet=Mult(iValue);
printf("\nMultiplication of Digits is:=%d",iRet);
return 0;
}