#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckDigit(char ch)
{
if((ch>=48) && (ch<=57))
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
char cValue='\0';
BOOL bRet=FALSE;
printf("Enter the Character :\n");
scanf("%c",&cValue);

bRet=CheckDigit(cValue);

if(bRet==1)
{
printf("It is a Digit");
}
else
{
printf("It is not a Digit");
}
return 0;
}