/* Problem Statement:Accept a number from user and Display only digits from the string.*/

#include<stdio.h>

void DisplayDigits(char str[])
{
int i=0,j=0;
if(str == NULL)
{
return ;
}
while(str[i]!='\0')
{
if(str[i]>='0' && str[i]<='9')
{
str[j]=str[i];
j++;
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

DisplayDigits(arr);

printf("Modified String is=%s\t",arr);
return 0;
}