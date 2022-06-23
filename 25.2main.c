#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckAlpha(char ch)
{
if((ch>=65) && (ch<=90))
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

bRet=CheckAlpha(cValue);

if(bRet==1)
{
printf("It is a Capital Character");
}
else
{
printf("It is not a Capital Character");
}
return 0;
}