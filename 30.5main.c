/* Problem Statement:Accept a String from user and connect two String toghether.

input== DeepaK 
2nd String =Patil
output== DeepaK Patil     in another String */

#include<stdio.h>

void StringConcat(char *src,char *dest)
{
if((src==NULL) || (dest==NULL))
{
return;
}
while(*src!='\0')
{
 src++;
}
while(*dest!='\0')
{
*src=*dest;
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
printf("Enter 2nd String\n");
scanf(" %[^'\n']s",brr);

StringConcat(arr,brr);

printf("Concated String is=%s",arr);
return 0;
}


