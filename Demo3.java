/* Programe Statement --Write a program which accept matrix and return largest number from both the
diagonals  */

import java.lang.*;
import java.util.*;

class Matrix
{
	int LargestElement(int arr[][])
	{
		int max=0;
		for(int i=0;i<arr.length;i++)
		{
			 max=arr[i][j];

		for(int j=0;j<arr.length;j++)
		{
			if((i==j) || ( (i + j) = arr.length-1))
			{
			if( max < arr[i][j])
			{
			max=arr[i][j];
			}
			}
		}
		}
return max;

	}
}

class Demo3
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
	System.out.println("Row with index"+i);
	for(int j=0;j<arr[i].length;j++)
	{
	System.out.println("Enter the Element "+i+","+j);
	arr[i][j]=sobj.nextInt();
	}
	}
	Matrix mobj=new Matrix();
	int Ret=mobj.LargestElement(arr);
	System.out.println("Largest Element from Both the Diagonal is"+Ret);
	}
}