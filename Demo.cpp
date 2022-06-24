// Maximum of 3 numbers

#include <iostream>

using namespace std;

//Generic implementatioon of maximum function
template <class T>    //template header

T  Maximum(T no1,T no2,T no3)
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
	


	float fvalue1,fvalue2,fvalue3;
	float fret=0;

	cout<<"Enter the First Number\n";
	cin>>fvalue1;

	cout<<"Enter the Second Number\n";
	cin>>fvalue2;

	cout<<"Enter the third Number\n";
	cin>>fvalue3;

	fret=Maximum(fvalue1,fvalue2,fvalue3);

	cout<<"Maximum Number is =="<<fret<<"\n";




	int value1,value2,value3;
	int iret=0;

	cout<<"Enter the First Number\n";
	cin>>value1;

	cout<<"Enter the Second Number\n";
	cin>>value2;

	cout<<"Enter the third Number\n";
	cin>>value3;

	iret=Maximum(value1,value2,value3);

	cout<<"Maximum Number is =="<<iret<<"\n";




	double dvalue1,dvalue2,dvalue3;
	double dret=0;

	cout<<"Enter the First Number\n";
	cin>>dvalue1;

	cout<<"Enter the Second Number\n";
	cin>>dvalue2;

	cout<<"Enter the third Number\n";
	cin>>dvalue3;

	dret=Maximum(dvalue1,dvalue2,dvalue3);

	cout<<"Maximum Number is =="<<dret<<"\n";


}