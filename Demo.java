import Marvellous.Array;                        //package magavla apan create kelela
import java.lang.*;
import java.util.*;

class Searching extends Array      //inheritance
{
	public Searching(int size)
	{
		super(size);    //call the constructor of parent class
	}
	public boolean LinearSearch(int iNo)
	{
		int i=0;
		boolean flag=false;
		for(i=0;i<arr.length;i++)
		{
			if(arr[i]==iNo)
			{
				flag = true;
				break;
			}
		}
		return flag;
	}

public boolean LinearSearchBI(int iNo)
{
	int start=0,end=0;
	boolean flag=false;
	for(start=0,end=arr.length-1;start<=end;start++,end--)
	{
		if((arr[start]==iNo) ||(arr[end]==iNo))
		{
			flag=true;
			break;
		}
	}
	return flag;
	
	}


	public boolean BinarySearch(int iNo)
	{
		int start=0,end=0,middle=0;
		boolean flag=false;
		end=arr.length-1;
		while(start<=end)
		{
			middle=(start + end)/2;
			if((arr[middle]==iNo) ||(arr[start]==iNo) || (arr[end]==iNo))
			{
				flag=true;
				break;
			}
			if(iNo>arr[middle])
			{
				start=middle+1;
			}
			if(iNo<arr[middle])
			{
				end=middle-1;
			}
		}
		return flag;
	}
}
class Demo
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the Size");
		int size=sobj.nextInt();
		Searching obj=new Searching(size);
		Array aobj=new Array(size);
		aobj.Accept();
		aobj.Display();
		System.out.println("Enter the Element to search");
		int value=sobj.nextInt();
		boolean bret=obj.BinarySearch(value);
		if(bret == true)
		{
			System.out.println("Elemnt is present into array");
		}
		else
		{
			System.out.println("Elemnt is not  present into array");

		}
	}
}