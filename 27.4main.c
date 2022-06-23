/* Problem Statement:Accept a String from user and check if there is a vowel present into that string.*/


#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char str[])
{
int i=0;
if(str==NULL)
{
return -1;
}
while(str[i]!='\0')
{
if((str[i]=='a')||(str[i]=='A')||(str[i]=='e')||(str[i]=='E')||(str[i]=='i')||(str[i]=='I')||(str[i]=='o')||(str[i]=='O') ||(str[i]=='u') ||(str[i]=='U'))
{
return 1;
}
i++;
}
}




int main()
{

char arr[30];
BOOL bRet=FALSE;

printf("Enter the String");
scanf("%[^'\n']s",arr);
bRet=CheckVowel(arr);
if(bRet==TRUE)
{
printf("It Contains Vowel");
}
else
{
printf("It do not Contains vowel");
}
return 0;
}