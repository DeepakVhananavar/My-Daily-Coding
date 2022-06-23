#include<stdio.h>

void Display(char ch)
{
if(ch<0)
{
ch=-ch;
}

printf("Decimal:%d\t",ch);
printf("Hexadecimal:%x\t",ch);
printf("Octal:%o\t",ch);
}








int main()
{
char cValue='\0';
printf("Enter the Character");
scanf("%c",&cValue);
Display(cValue);
return 0;
}