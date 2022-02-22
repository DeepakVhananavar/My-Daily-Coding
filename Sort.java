import java.io.*;
import java.util.*;

class Sort{
	public void Display_sort(int n, int arr[])
	{
		int low=0,mid=0,temp=0;
		int high= n-1;
		while(mid<=high)
		{
			switch(arr[mid])
			{
				//if element is 0
			case 0: temp=arr[low];
					arr[low]=arr[mid];
					arr[mid]=temp;
					mid++;
					low++;
					break;
				//if element is 1
			case 1:mid++;
				   break;
			case 2: temp=arr[mid];
					arr[mid]=arr[high];
					arr[high]=temp;
					high--;
					break;

			}
		}
		for(int i=0;i<n;i++)
		{
			System.out.print(arr[i]+" ");
		}

	}


	public static void main(String args[])
	{
		Sort obj=new Sort();
		int Arr[]={0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
		int iValue=0;
		iValue=Arr.length;
		obj.Display_sort(iValue,Arr);
		

	}
}