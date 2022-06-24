// Maximum of 3 numbers

#include <iostream>

using namespace std;

int  Maximum(int no1,int no2,int no3)
{

if((no1 >= no2) && (no1 >= no3))
{
	return no1;
}
else if((no2 >= no1) && (no2 >= no3))
{
	return no2;
}
else
{
return no3;
}


}

int main()
{
	int value1,value2,value3;
	int iret=0;

	cout<<"Enter the First Number\n";
	cin>>value1;

	cout<<"Enter the Second Number\n";
	cin>>value2;

	cout<<"Enter the third Number\n";
	cin>>value3;

	iret=Maximum(value1,value2,value3);

	cout<<"Maximum Number is\t"<<iret<<"\n";
}