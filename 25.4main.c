#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckAlpha(char ch)
{
if((ch>=97) && (ch<=122))
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
printf("It is a Small Letter");
}
else
{
printf("It is not a Small Letter");
}
return 0;
}