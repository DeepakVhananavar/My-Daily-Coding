/* Programe Statement --Write Java program which accept String from user and display
below pattern.
Input : Hello
Output : 
H e l l o
H e l l
H e l
H e
H
H e
H e l
H e l l
H e l l 0   */

import java.lang.*;
import java.util.*;
class DemoString
{
	void WordFrequency(String str)
	{
		char arr[] = str.toCharArray();
	int size = arr.length;
		int i = 0;


				for (i=size-1;i>=0;i-- )
		 {
		 	for (int j=0;j<=i;j++ )
		 	{
		 		System.out.print(arr[j]+"\t");
		 	}
			System.out.println();
		}

		for (i=0;i<arr.length;i++ )
		 {
		 	for (int j=0;j<=i;j++ )
		 	{
		 		System.out.print(arr[j]+"\t");
		 	}
			System.out.println();
		}




		
	}
}

class Demo4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter string");

		String str = sobj.nextLine();
		DemoString dobj = new DemoString();

			dobj.WordFrequency(str);
		
	}
}
