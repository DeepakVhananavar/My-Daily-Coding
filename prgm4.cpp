/* Programe Statement --Write generic program to accept N values and search last occurrence of any
specific value.
Input : 10 20 30 10 30 40 10 40 10
Value to search : 40
Output : 8      */



#include<iostream>

using namespace std;

template <class T>
int SearchLast(T *Arr,T Value,int size)
{	
	int pos=0;
	if(size < 0)
	{
	return 0;
	}

	for(int i=0;i<=size;i++)
	{
	if(Arr[i]==Value)
	{
	pos=i;
	}
	}
	
	return pos+1;
}

int main()
{
	int ret=0;
	

	int Arr[]={50,20,30,10,50,20,10,30,20};

	ret=SearchLast(Arr,10,9);
	cout<<"Number found at pos :="<<ret<<"\n";
	
	

	return 0;
}