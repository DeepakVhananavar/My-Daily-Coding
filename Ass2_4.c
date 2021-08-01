//Accept two numbers from user and display first number in second
//number of times.

// Input = 12  5
//Output = 12 12 12 12 12

#include<stdio.h>

void Display(int ino,int freq)
{
	if((ino < 0)||(freq<0))
	{
	ino=-ino;
	freq=-freq;
	}
	if(freq==0)
	{
	printf("Invalid Frequnecy!!");
	}
	else
	{
		for(int i=1;i<=freq;i++)
		{
		printf("%d\t",ino);
		}
	}
}

int main()
{
	int iValue=0;
	int iValue2=0;
	printf("Enter the Two numbers:=  ");
	scanf("%d%d",&iValue,&iValue2);
	Display(iValue,iValue2);
	return 0;
}