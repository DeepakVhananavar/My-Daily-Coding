// Write a program which calc even factorial of the number
//input--7    output--2 * 4 * 6=48
//input--8    output--2 * 4 * 6 * 8=384

import java.lang.*;
import java.util.*;                 // for Scanner input ghyala


class Numbers
{
	int EvenFactorial(int iNo)
	{
		int Fact=1,iCnt=2;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		while(iCnt<=iNo)
		{
			Fact=Fact * iCnt;
			iCnt=iCnt + 2;
		}
		return Fact;
		
	}
}




class Demo
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the Number");
		int Value=sobj.nextInt();
		
		Numbers aobj= new Numbers();
		int Ret=aobj.EvenFactorial(Value);
		System.out.println("Even Factorial of no is "+Ret);
	}
	
}