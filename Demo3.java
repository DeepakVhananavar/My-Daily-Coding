/* Programe Statement --Write Java program which accept String from user and display
below pattern.
Input : Hello
Output : 
H
H e
H e l
H e l l
H e l l o   */


import java.lang.*;
import java.util.*;

class DemoPattern
{
	void DisplayPattern(String str)
	{
		char arr[]=str.toCharArray();
		
		for(int i=0;i<arr.length;i++)
		{
		for(int j=0;j<=i;j++)
		{
	
		System.out.print(arr[j]+"\t");
		
		}
		System.out.println("\n");
		}
	}
}



class Demo3
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