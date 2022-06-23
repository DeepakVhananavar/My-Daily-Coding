/* Problem Statement:Accept a String from user and copy the contents of the 1 string to another.

input== Deepak
output== Deepak     in another String */

#include<stdio.h>

void StringCopy(char *src,char *dest)
{

if(
(src==NULL) ||  // if Source is NULL
(dest==NULL)    // if Destination string(address) is NULL
)
{
return;
}
while(*src!='\0')
{
*dest=*src;
src++;
dest++;
}
*dest='\0';

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


