/*5. Write generic program to accept N values and reverse the contents.
Input : 10 20 30 10 30 40 10 40 10
Output : 10 40 10 40 30 10 30 20 10  */

#include<iostream>

using namespace std;

template <class T>

void Reverse(T *Arr,int size)
{	
	T temp=0;
	int Start=0,i=0;
	int End = size-1;;
	if(size < 0)
	{
	return;
	}
	
	while(Start < End)
	{	

		temp=Arr[Start];
		Arr[Start]=Arr[End];
		Arr[End]=temp;
		Start++;
		End--;
	}
  for( i=0; i < size;i++)
  {
	cout<<Arr[i]<<"\t";
  }
  cout<<"\n";
}

int main()
{

	int Arr[]={10, 20 ,30 ,10 ,30 ,40 ,10 ,40 ,10};

 for(int  i=0;i < 9;i++)
	{
		cout<<Arr[i]<<"\t";
	}

	cout<<"\n";

	Reverse(Arr,9);
	return 0;
}