//Accept one character from user and convert case of that character.
//Input : a Output : A
//Input : D Output : d

#include<stdio.h>
#include<stdlib.h>

void Display(char cVal)
{
if((cVal>=32 )&&(cVal<=64))					// Filter for Invalid op if user puts any number or other symbol
{
	printf("Invalid Input!!\n");
	exit(0);
}
if((cVal >='A') &&(cVal<='Z'))				// We can use ASCII values or the Alphabets 
{
	cVal=cVal+32;
}
else
{
	cVal=cVal-32;
}
printf("%c",cVal);

}


int main()
{
	char cValue='\0';
	printf("Enter the Charcter := ");
	scanf("%c",&cValue);
	Display(cValue);
	return 0;
}