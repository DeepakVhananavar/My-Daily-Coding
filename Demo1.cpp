// class for arrray  with dynamic object creation and without accepting n number

 #include<iostream>

 using namespace std;

 class Array
 {
 	public :
 	int *Arr;       //Charateristics
 	int size;        //Charateristics

 	Array(int length=10)        // Parametrized constructor with default size
 	{	
 		cout<<"Inside Constructor\n";
 		Arr=new int[length];
 		size=length;
 	}

 	~Array()    //Destructor
 	{
 		cout<<"Inside Destructor\n";
 		delete []Arr;                //Dynamic memorey Deallocation
 	}

 	void Accept()      //Behaviour
 	{
 		cout<<"Eneter the elements\n";
 		for(int i=0;i<size;i++)
 		{
 			cin>>Arr[i];
 		}
 	}


 	void Dispaly()                     //Behaviour
 	{
 		cout<<"Elements are\n";
 		for(int i=0;i<size;i++)
 		{
 			cout<<Arr[i]<<"\t";
 		}
 		cout<<"\n";
 	}

 };

 int main()
 {
 	
 	Array *obj1;
 	obj1=new Array();      // Dynamic object creation
 	obj1->Accept();
 	obj1->Dispaly();

 	delete obj1;      //Dynamic memorey Deallocation
 	return 0;
 }