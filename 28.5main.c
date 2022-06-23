/* Problem Statement:Accept a number from user and Display only digits from the string.*/

#include<stdio.h>

int CountWhiteSpaces(char str[])
{
int i=0,iCnt=0;
if(str == NULL)
{
return -1;
}
while(str[i]!='\0')
{
if(str[i]=='')
{
iCnt++;
i++;
}
else{
i++;
}
return iCnt;
}

}



int main()
{

char arr[30];
int iRet=0;
printf("Enter the String :\n");
scanf("%[^'\n']s",arr);

iRet=CountWhiteSpaces(arr);

printf("No of White Space  is=%d\t",iRet);
return 0;
}