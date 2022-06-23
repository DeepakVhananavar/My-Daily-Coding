/* Programe Statement --Write Java program which accept number of rows and number of
columns from user and display below pattern.
Input : iRow = 3 iCol = 4
Output : 
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4 */


import java.lang.*;
import java.util.*;

class DemoPattern
{
	void DisplayPattern(int row,int col)
	{	
		int No=1;
		if((row==0)|| (col==0))
		{
		return;
		}
		if((row<0)||(col<0))
		{
		row=-row;
		col=-col;
		}

		for(int i=1;i<=row;i++)
		{
		for(int j=1;j<=col;j++)
		{
			System.out.print( (No)+"\t");
		}
		No++;
		System.out.println("\n");
		}

	}
}

class Demo5
{
	public static void main(String args[])
	{
	Scanner sobj=new Scanner(System.in);
	DemoPattern dobj=new DemoPattern();
	System.out.println("Enter the no of Rows");
	int Row = sobj.nextInt();
	System.out.println("Enter the no of Cols");
	int Col = sobj.nextInt();
	dobj.DisplayPattern(Row,Col);
	}
}