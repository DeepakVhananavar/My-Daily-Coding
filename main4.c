/* Programee Statement ---Write a recursive program which accept number from user and return its
factorial.
Input : 5
Output : 120    */


#include<stdio.h>


int Factorial(int iNo)
{
	static int i=1;
	static int  Fact=1;
if(iNo==0)
{
	return 0;
}
if(i<=iNo)
{
	Fact=Fact*i;
	i++;
	Factorial(iNo);
}
return Fact;

}

int main()
{
int iValue=0;
int iRet=0;
printf("\nEnter the Number:=");
scanf("%d",&iValue);
iRet=Factorial(iValue);
printf("\nFactorial is:=%d",iRet);
return 0;
}
