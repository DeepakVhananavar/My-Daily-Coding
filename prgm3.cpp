/* Write generic program to accept N values and search first occurrence of any
specific value.
Input : 10 20 30 10 30 40 10 40 10
Value to search : 40
Output : 6                            */


#include<iostream>

using namespace std;

template <class T>
int SearchFirst(T *Arr,T Value,int size)
{	
	int i=0;
	if(size < 0)
	{
	return 0;
	}

	for(i=0;i<=size;i++)
	{
	if(Arr[i]==Value)
	{
	break;
	}
	}
	if(i==size)
	{
	return -1;
	}
	else
	{
	return i+1;
	}
}

int main()
{
	int ret=0;
	

	int Arr[]={50,20,30,10,50,20,10,30,20};

	ret=SearchFirst(Arr,10,9);
	cout<<"Number found at pos :="<<ret<<"\n";
	
	

	return 0;
}