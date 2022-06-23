/* Problem Statement:Accept a number from user and convert the string into Uppercase.*/

#include<stdio.h>

void ConvertUpper(char str[])
{
int i=0;
if(str == NULL)
{
return ;
}
while(str[i]!='\0')
{
if(str[i]>=90 && str[i]<=122)
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

ConvertUpper(arr);

printf("Modified String is=%s\t",arr);
return 0;
}