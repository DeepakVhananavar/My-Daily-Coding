/* Problem Statement:Accept a String from user and return the diff between the Capital and small letters into that string.*/

#include<stdio.h>

int CheckDiff(char *str)
{
int iCnt=0 ,icnt=0;
int i=0,iDiff=0;
if(str==NULL)
{
	printf("User did not Entered any string");
	return -1;
}
while(str[i]!='\0')
{
if(str[i]>=97 && str[i]<=122)
{
	iCnt++;

}
else if(str[i]>=65 && str[i]<=90)
{
icnt++;
}
i++;
}
iDiff=iCnt-icnt;
return iDiff;
}





int main()
{

int iRet=0;
char arr[20];      //static memorey allocation
printf("Enter The String:");
scanf("%[^'\n']s",arr);         // accept string until user enters enter key
iRet=CheckDiff(arr);
printf("Difference is:=%d",iRet);
return 0;

}