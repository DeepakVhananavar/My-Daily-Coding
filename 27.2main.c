/* Problem Statement:Accept a String from user and Display number of small letters into that string.*/

#include<stdio.h>

void CheckCapital(char *str)
{
int iCnt=0;
int i=0;
if(str[i]='\n')
{
	printf("User did not Entered any string");
	return;
}
while(str[i]!='\0')
{
if(str[i]>=97 && str[i]<=122)
{
	iCnt++;
}
i++;
}
printf("Number of Small Letters in String is:=%d",iCnt);
}





int main()
{
char arr[20];          //static memorey allocation
printf("Enter The String:");
scanf("%[^'\n']s",arr);         // accept string until user enters enter key
CheckCapital(arr);
return 0;

}