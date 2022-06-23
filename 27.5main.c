/* Problem Statement:Accept a string from user and print string into reverese order.*/

#include<stdio.h>


void DisplayRev(char str[])
{
	char temp='\0';
int iStart=0,iEnd=0;
if(str==NULL)
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
return;
}
int main()
{
char arr[30];
printf("Enter the String\n");
scanf("%[^'\n']s",arr);
DisplayRev(arr);
printf("Reverse String is:%s\n",arr);
return 0;
}