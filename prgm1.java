/* Write Java program which accept array of characters from user and
replace each capital character with its corresponding small character.
Input : b N j B R b A d G G
Output : b n j b r b a d g g   */

import java.lang.*;
import java.util.*;

class MyArray
{
	public void ReplaceArr(char arr[])
	{
	
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i] >='A') && (arr[i] <= 'Z'))
			{
				arr[i] = arr[i] + 32;

			}
		}

		for(int i=0;i<arr.length;i++)
		{
			System.out.print(arr[i]+"\t");
		}
	}
}

class prgm1
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the Size of Array");
		int size=sobj.nextInt();
		char arr[]=new char[size];
		System.out.println("Enter the character into array");
		for(int i=0;i<size;i++)
		{
			arr[i]=sobj.next().charAt(0);
		}

		
		MyArray obj=new MyArray();
		obj.ReplaceArr(arr);

	}
}