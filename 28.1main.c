/* Problem Statement:Accept a number from user and convert the string into lowercase.*/

#include<stdio.h>

void Convertlower(char str[])
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
i++;
}
return;
}





int main()
{

char arr[30];

printf("Enter the String :\n");
scanf("%[^'\n']s",arr);

Convertlower(arr);

printf("Modified String is=%s\t",arr);
return 0;
}