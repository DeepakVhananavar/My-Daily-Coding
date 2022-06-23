/* Programe Statement --Write a program which accept matrix and one number from user and return
frequency of that number.  */


import java.lang.*;
import java.util.*;

class Matrix
{
	int FindNumber(int arr[][],int iNo)
	{
		int iCnt=0;
		for(int i=0;i<arr.length;i++)
		{
		for(int j=0;j<arr.length;j++)
		{
		if(arr[i][j]==iNo)
		{
		iCnt++;
		}
		}

		}
return iCnt;


	}
}
class Demo2
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
		System.out.println("Enter the Number to Search");
		int value=sobj.nextInt();
		Matrix mobj=new Matrix();
		int iRet=mobj.FindNumber(arr,value);
		System.out.println("No found "+iRet + "\t times in the matirx");
	}
}