#include<stdio.h>

void DisplayTable()
{
int c=0;
printf("Decimal\tHexa\tOctal\tChar\n");

	for(c=0;c<=255;c++)
{
printf("%d\t%x\t%o\t%c\n",c,c,c,c);
}
return;
}


int main()
{

DisplayTable();
return 0;

}