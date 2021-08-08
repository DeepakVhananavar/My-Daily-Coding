/*Write a program which accept total marks & obtained marks from user and
calculate percentage.
Input : 1000 745
Output : 74.5%      */


#include<stdio.h>

int Calc_Perc(int iNo,int iNo2)
{	
    float Perc=0.0;
    if(iNo2<iNo)
    {
    	printf("Invalid Input!! \n");
    	return 0;
    }
	
	if(iNo2==0)
	{
	printf("Invalid Input!!!\n");
	return 0;
	}
	Perc= ((float)iNo/(float)iNo2 * 100);
	return Perc;
}


int main()
{
	int iValue=0,iValue2=0;
	float fRet=0.0;
	printf("Enter the Marks Obtained:= ");
	scanf("%d",&iValue);
	printf("Enter the Total Marks:= ");
	scanf("%d",&iValue2);
	fRet=Calc_Perc(iValue,iValue2);
	printf("Percentage is :- %f\n",fRet);
	return 0;
}