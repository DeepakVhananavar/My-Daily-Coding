/* Programe Statement --Write a program which accept matrix and swap the contents of consecutive rows.   */




import java.lang.*;
import java.util.*;

class Matrix
{
	void SwapRow(int arr[][],int x,int y)
	{
		int iSum= 0,temp=0;

		for(int i = 0; i< arr.length; i++)
		{
		
     				temp = arr[(x-1)][i];
                    arr[x-1][i] = arr[y-1][i];
                    arr[y-1][i] = temp;
                
		}
                System.out.println("Matrix after interchanging rows:"+x +" and "+y);

        for (int i = 0; i < arr.length; i++) 
        {
            for (int j = 0; j < arr.length; j++) 
             {
                System.out.print(arr[i][j] + " ");
             }
                System.out.println("");
         }
	}
}

class Demo5
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of rows");
		int row = sobj.nextInt();

		System.out.println("Enter number of columns");
		int col = sobj.nextInt();

		int arr[][] = new int[row][col];

		System.out.println("Enter the elements");

		for(int i = 0;i<arr.length;i++)
		{
			System.out.println("Row with index :"+i);
			for(int j = 0;j<arr[i].length;j++)
			{
				System.out.println("Enter the element :"+i+","+j);
				arr[i][j] = sobj.nextInt();
			}
		}
		System.out.println("Enter the two row no's to swap:");
		 int x = sobj.nextInt();
         int y = sobj.nextInt();
		Matrix mobj = new Matrix();
		mobj.SwapRow(arr,x,y);
	}
}






















