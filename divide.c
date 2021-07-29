// write a c Program to divide two numbers.

#include<stdio.h>       // Header File used for io func

int Divide(int a, int b)
{	
	if((a<0) || (b<0))  // filter for coverting negative no to positive no.
	{
		a=-a;
		b=-b;
	}
	float Ans=0;

	if(b <=0 )
	{
		return -1;
	}
	else
		{
			Ans= a / b;
		}
	return Ans;


}

int main()
{
	int value1=0;
	int value2=0;
	printf("Enter the Two numbers:");
	scanf("%d%d",&value1,&value2);
    
    float Ret = Divide(value1,value2);
    
    printf("The Division is %f",Ret);
    
    return 0;
}