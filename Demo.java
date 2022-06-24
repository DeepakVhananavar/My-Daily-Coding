// Accept anumber and display its fibnoacci series



import java.lang.*;
import java.util.*;

class Numbers
{
	

	void Fibbonacci(int iNo)
	{
		int first=0,Second=1,third=0;
		System.out.println();
		for(int i=1;i<=iNo;i++)
		{
			System.out.println(first+"\t");
			third=first + Second;
			first=Second;
			Second=third;
		}
	}

}



class Demo
{
	public static void main(String args[])
	{
		
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the Number:");
		int value=sobj.nextInt();
		Numbers aobj=new Numbers();
		aobj.Fibbonacci(value);
		}
}