/* Problem Statement:Accept a String and reverse that string"
	ip= MarveL     op= LevraM */



#include<stdio.h>

void RevString(char str[])
{
int i=0;
int iStart=0,iEnd=0;
char temp='\0';
if(str==NULL )
{
return;
}

while(str[iEnd]!='\0')
{
iEnd++;
}
iEnd--;

while(iStart<iEnd)
{
temp=str[iStart];
str[iStart]=str[iEnd];
str[iEnd]=temp;

iStart++;
iEnd--;
}
}



int main()
{
char arr[30];

printf("Enter the String\n");
scanf("%[^'\n']s",arr);

RevString(arr);

printf("Reverse String is=%s",arr);  
return 0;
}