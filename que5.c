#include<stdio.h>
void accept(int ino)
{

int icnt=0;
for(icnt=0;icnt<=ino;icnt++)
{
printf("*");
}
}
int main()
{
int iValue=5;
accept(iValue);
return 0;

}
