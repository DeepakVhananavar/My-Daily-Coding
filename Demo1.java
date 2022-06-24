// Accept the Matices from user and display the Maximum Elemnt of each row */

import java.lang.*;
import java.util.*;

class Matrix
{

	void MaxRow(int arr[][])
	{	
		int iMax=0;
		for(int i=0;i<arr.length;i++)
		{	
			iMax=arr[i][0];
			for(int j=0;j<arr[i].length;j++)
		{
			if(arr[i][j]>iMax)
			{
				iMax=arr[i][j];
			}
			

		}
		System.out.println("Largest of row is:="+i +"is:"+iMax);
		}
	}
}


class Demo1
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the No of Rows:=");
		int row=sobj.nextInt();

		System.out.println("Enter the No of Columns:=");
		int col=sobj.nextInt();

		int arr[][]=new int[row][col];

		System.out.println("Enter the Elemnts:\n");
		for(int i=0;i<arr.length;i++)
		{	
			System.out.println("Row with Index :"+i);
			for(int j=0;j<arr[i].length;j++)
		{
			System.out.println("Enter the Element:"+i+","+j);
			arr[i][j]=sobj.nextInt();

		}
		}
		Matrix mobj=new Matrix();
		mobj.MaxRow(arr);
}
}