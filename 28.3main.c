/* Problem Statement:Accept a number from user and Toggle Case of  the string into Uppercase & lower
ip= MarveL
op= mARVEl .*/

#include<stdio.h>

void ToggleCase(char str[])
{
int i=0;
if(str == NULL)
{
return ;
}
while(str[i]!='\0')
{
if(str[i]>=65 && str[i]<=90)
{
str[i]=str[i]+32;
}
else if(str[i]>=97 && str[i]<=122)
{
str[i]=str[i]-32;
}
i++;
}
return;
}





int main()
{

char arr[30];

printf("Enter the String :\n");
scanf("%[^'\n']s",arr);

ToggleCase(arr);

printf("Modified String is=%s\t",arr);
return 0;
}