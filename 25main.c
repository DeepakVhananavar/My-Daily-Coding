#include"25Header.h"

int main()

{
char cValue='\0';
BOOL bRet=FALSE;
printf("Enter the Character :\n");
scanf("%c",&cValue);

bRet=CheckAlpha(cValue);

if(bRet==1)
{
printf("It is a Character");
}
else
{
printf("It is not a Character");
}
return 0;
}