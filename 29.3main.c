/* Problem Statement:Accept a String and another character from user and 
                     check return its 1st occurance into the string
	ip= MarveL
		M
       op= 0 .*/
	   
	
#include<stdio.h>

int FirstOccur(char str[],char ch)
{
int i=0,iCnt=0;
if((str==NULL) || (ch=='\0'))
{
return -1;
}

while(str[i]!='\0')
{
if(str[i]==ch)
{
break;
}
i++;
}
if(str[i]==ch)
{
return i;
}
else
{
return -1;
}
}



int main()
{
char arr[30];
int iRet=0;
char cValue='\0';

printf("Enter the String\t");
scanf("%[^'\n']s",arr);	
printf("Enter the Charater\t");
scanf(" %c",&cValue);
iRet=FirstOccur(arr,cValue);
if(iRet==-1)
{
	printf("ERROR:INVALID INPUT");
}
else
{
printf("First Occurence of the Charater is=:%d",iRet);
}
return 0;
}