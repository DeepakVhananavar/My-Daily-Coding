#include "Header.h"

int main()
{
int iValue=0;
BOOL bRet=FALSE;
printf("Enter The Number\n");
scanf("%d",&iValue);
bRet=Check(iValue);
if(bRet==TRUE)
{
printf("Divisible By 5");
}
else
{
printf("Not Divisible by 5");
}
return  0;
}