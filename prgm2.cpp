/* Program Statement --Write generic program to accept N values and count frequency of any specific
value.  */


#include<iostream>

using namespace std;

template <class T>

int CountFreq(T *Arr,T no,int size)
{
int iCnt=0;
if(size <= 0)
{
	return 0;
}

for(int i=0;i<=size;i++)
{
	if(Arr[i]==no)
	{
	iCnt++;
	}
}
return iCnt;


}


int main()
{
	int ret=0;
	

	int Arr[]={10,20,30,40,50,20,10,30,20};

	ret=CountFreq(Arr,20,9);
	cout<<"Frequency of the given no is:="<<ret<<"\n";
	
	

	return 0;
}