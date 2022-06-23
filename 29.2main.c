/* Problem Statement:Accept a String and another character from user and 
                     check return the Frequency of that Charater into the string
	ip= MarveL
		M
       op= 1 .*/
	   
	
#include<stdio.h>

int CountFreq(char str[],char ch)
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
iCnt++;
}
i++;
}
return iCnt;

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
iRet=CountFreq(arr,cValue);

printf("Frequency of the Charater is=:%d",iRet);
return 0;
}