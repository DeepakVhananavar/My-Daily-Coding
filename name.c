/* Write a program which accept name from user and print that name.
Input : Deepak Vhananavar
Output : Deepak Vhananavar    */

#include<stdio.h>
int main()
{
	char name[30]={'\0'};
	printf("Enter Your Name :- ");
	scanf("%[^'\n']s",name);
	printf("%s",name);
}
