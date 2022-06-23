#include<stdio.h>

void Display(char ch)
{
	int i=0;
if(ch>=65 && ch<=90)
{
for(i=ch;i<=90;i++)
{
printf("%c\t",i);
}
}
else if(ch>=97 && ch<=122)
{
for(i=ch;i<=122;i--)
{
printf("%c\t",i);
if(i==97)
{
	return;
}
}
}
else
{
return;
}
}





int main()
{
char cValue='\0';

printf("Enter the Character");
scanf("%c",&cValue);
Display(cValue);
return 0;
}