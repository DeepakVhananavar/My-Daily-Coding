/* Programe Statement --Write Java program which accept String from user and display
below pattern.
Input : Hello
Output : 
H e l l o
H e l l
H e l
H e
H     */



import java.lang.*;
import java.util.*;

class DemoPattern
{
	void DisplayPattern(String str)
	{
		char arr[]=str.toCharArray();
		
		for(int i=arr.length-1;i>=0;i--)
		{
		for(int j=0;j<=i;j++)
		{
	
		System.out.print(arr[j]+"\t");
		
		}
		System.out.println("\n");
		}
	}
}



class Demo2
{
	public static void main(String args[])
	{
	Scanner sobj=new Scanner(System.in);
	DemoPattern dobj=new DemoPattern();
	System.out.println("Enter the String");
	String str=sobj.nextLine();
	dobj.DisplayPattern(str);
	}
}