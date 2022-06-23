/* Write a program which accept string from user and copy the
contents of that string into another string. (Implement strncpy()
function)
Input : “Marvellous Multi OS”
10
Output : “Marvellous
Note : If third parameter is greater than the size of source string then
copy whole string into destination.*/

#include<stdio.h>

void StringCopy(char *src,char *dest,int iCnt)
{

if((src==NULL) &&(iCnt==0))
{
return;
}
while((*src!='\0') && (iCnt!=0))
{
*dest=*src;
src++;
dest++;
iCnt--;
}
if((iCnt>*dest) || (*dest='\0'))
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

StringCopy(arr,brr,10);

printf("Copied String is=%s",brr);
return 0;
}


