#include<stdio.h>

void Display(char ch)
{
if(ch>=65 && ch<=90)
{
ch=ch+32;
printf("%c\t",ch);
}
else if(ch>=97 && ch<=122)
{
ch=ch-32;
printf("%c\t",ch);
}

else
{
printf("%c",ch);
}
return;
}


int main()
{
char cValue='\0';

printf("Enter the Character");
scanf("%c",&cValue);
Display(cValue);
return 0;
}