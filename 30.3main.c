/* Problem Statement:Accept a String from user and copy the capital letters of 1 string to another.

input== DeepaK
output== DK     in another String */

#include<stdio.h>

void StringCopy(char *src,char *dest)
{

if(src==NULL)
{
return;
}
while(*src!='\0')
{ 
if((*src>='A') && (*src<='Z'))
{
*dest=*src;
dest++;
}
src++;
}
if(*dest='\0')
{
	return;
}
}



int main()
{
char arr[30];
char brr[30];

printf("Enter the String\n");
scanf("%[^'\n']s",arr);

StringCopy(arr,brr);

printf("Copied String is=%s",brr);
return 0;
}


