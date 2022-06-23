/* Program Statement--Write Java program which accept N numbers from user and return
difference between summation of even elements and summation of
odd elements.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)   */

import java.lang.*;
import java.util.*;

class Numbers
{

	int Summation(int arr[])
	{
		int iEven=0,iOdd=0,iSum=0;
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i] % 2)==0)
			{
				iEven=iEven+arr[i];
			}
			else
			{
				iOdd=iOdd+arr[i];
			}
		}
		iSum=iEven-iOdd;

		return iSum;
	}
}



class Demo
{
	public static  void main(String[] args) {
		Scanner sobj=new Scanner(System.in);
		Numbers nobj=new Numbers();
		System.out.println("How many Numbers you want to insert:=");
		int value=sobj.nextInt();
		int arr[]=new int[value];
		System.out.println("Enter the Elemnts\n");
		for(int i=0;i<arr.length;i++)
		{
			arr[i] = sobj.nextInt();
		}
		int Ret=nobj.Summation(arr);
		System.out.println("Summation of Even Elemnts and Odd Elemnts is=="+Ret);
	}
}