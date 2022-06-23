#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Display(char ch)
{
if(ch==33 || ch==35||ch==36||ch==94||ch==64||ch==37||ch==42||ch==38)
{
return 1;
}
else
{
return 0;
}
}


int main()
{
char cValue='\0';
BOOL bRet=FALSE;
printf("Enter the Character");
scanf("%c",&cValue);
bRet=Display(cValue);
if(bRet==1)
{
printf("It is a Special Character\n");
}
else
{
printf("It is not a Special Character\n");
}
return 0;
}