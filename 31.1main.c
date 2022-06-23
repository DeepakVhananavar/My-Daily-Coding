/* Problem Statement: Write a program which accept string from user and copy that
characters of that string into another string in reverse order.
Input : “Marvellous Python”
Output : “nohtyP suollevraM”.*/


#include<stdio.h>


void StrRevX(char src[] ,char dest[])
{
	int i=0,iStart=0,iEnd=0;
	char temp='\0';
if(
   (src==NULL) ||
   (dest==NULL)
   )
{
return;
}

while(src[iEnd]!='\0')
{
iEnd++;
}
iEnd--;

while(iStart<iEnd)
{
temp=src[iStart];
src[iStart]=src[iEnd];
src[iEnd]=temp;

iStart++;
iEnd--;
}
while(src[i]!='\0')
{
	dest[i]=src[i];
	i++;
}
dest[i]='\0';
}






int main()
{

char arr[30]={'\0'};
char brr[30]={'\0'};

printf("Enter the String:");
scanf("%[^'\n']s",arr);

StrRevX(arr,brr);

printf("Reverse String is=%s",arr);
return 0;
}
