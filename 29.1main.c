/* Problem Statement:Accept a String and another character from user 
                     and check wheather it is present in the string or not
ip= MarveL
    M
op= TRUE .*/

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0



BOOL CheckChar(char str[],char ch)
{
int i=0;
if((str == NULL) && (ch=='\0'))
{
return -1;
}
while(str[i]!='\0')
{
if(str[i]==ch)
{
return TRUE;
}
i++;
}
}





int main()
{

char arr[30];
char ch=0;
BOOL bRet=FALSE;
printf("Enter the String :\n");
scanf("%[^'\n']s",arr);

printf("Enter the Character to Search:\n");
scanf(" %c",&ch);
bRet=CheckChar(arr,ch);
if(bRet==TRUE)
{
printf("character is Present:");
}
else
{
printf("Character is not present:");
}
return 0;
}