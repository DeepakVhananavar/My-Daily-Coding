
import java.lang.*;
import java.util.*;

class Matrix
{
	int AddDiagonal(int arr[][])
	{
		int Sum=0;
		for(int i=0;i<arr.length;i++)
		{
		for(int j=0;j<arr.length;j++)
		{
		if(i==j)
		{
		Sum=Sum+arr[i][j];
		}
		}

		}
return Sum;


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
		int iRet=mobj.AddDiagonal(arr);
		System.out.println("Summation of Diagonal elemnts is:="+iRet);
	}
}