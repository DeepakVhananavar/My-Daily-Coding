// Accept anumber and display its fibnoacci series upto the give number



import java.lang.*;
import java.util.*;

class Numbers
{
	

	void Fibbonacci(int iNo)
	{
		int first=0,Second=1,third=0;
		System.out.println();
		for(;first<=iNo;)           //while(first<=iNo) 
		{	
			System.out.println(first+"\t");
			third=first+Second;
			first=Second;
			Second=third;
		}
	}

}



class Demo2
{
	public static void main(String args[])
	{
		
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the Number:");
		int value=sobj.nextInt();
		Numbers nobj=new Numbers();
		nobj.Fibbonacci(value);
		}
}