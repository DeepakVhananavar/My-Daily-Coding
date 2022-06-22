/* Programe Status -----   Write a recursive program which accept string from user and count number
of characters.
Input : Hello
Output : 5    */

#include<stdio.h>

int Strlen(char *str)
{
	static int iCnt=0,i;

if(*str!='\0')
{
	iCnt++;
	str++;
	Strlen(str);
}
return iCnt;

}



int main()
{
char arr[50]={'\0'};
int iRet=0;
printf("\nEnter the String\n");
scanf("%[^'\n']s",arr);
iRet=Strlen(arr);
printf("\nLength of String:=%d",iRet);
return 0;
}