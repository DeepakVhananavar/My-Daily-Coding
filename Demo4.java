/* Programe Statement --Write a program which accept matrix and display addition of elements From each
column  */

import java.lang.*;
import java.util.*;

class Matrix
{
	void AdditionCol(int arr[][])
	{
		int sum=0;
		for(int i=0;i<arr.length;i++)
		{
		sum=0;

		for(int j=0;j<arr.length;j++)
		{
			sum=sum+arr[j][i];	
		
		}

	System.out.println("Sum of "+(i+1)+" col:="+sum);
		}
	}	
}

class Demo4
{
	public static void main(String args[])
	{
	Scanner sobj=new Scanner(System.in);
	System.out.println("Enter the no of Rows");
	int row=sobj.nextInt();

	System.out.println("Enter the no of cols");
	int col=sobj.nextInt();

	int arr[][]=new int [row][col];
	System.out.println("Enter the Elements into Matrix");

	for(int i=0;i<arr.length;i++)
	{
	System.out.println("Row with index\t"+i);
	for(int j=0;j<arr[i].length;j++)
	{
	System.out.println("Enter the Element "+i+","+j);
	arr[i][j]=sobj.nextInt();
	}
	}
	Matrix mobj=new Matrix();
	mobj.AdditionCol(arr);
	
	}
} 