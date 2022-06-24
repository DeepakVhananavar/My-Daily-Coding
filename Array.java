package Marvellous;                  // package create kela aapn tyamule marvellous navacha folder  ready hoil

import java.lang.*;
import java.util.*;


public class Array
{
	public int arr[];            //charaterictics


	public Array(int size)                 //parameterized constructor          
	{
		arr=new int[size];
	}
	public void Accept()                          //behaviour
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the Elemnnts");
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=sobj.nextInt();
		}

	}
	public void Display()                          //behaviour
	{
		System.out.println("Entered  Elemnnts are");
		for(int i=0;i<arr.length;i++)
		{
			System.out.print(arr[i]+"\t");
		}
		System.out.println();
	}

}


