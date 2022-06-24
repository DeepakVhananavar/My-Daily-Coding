// Accept a Range from user and display all Strong numbers
//strong number is such a no whose summation of factorial of digits is same sa its number
// Input --145  1!+4!+5!=145  TRUE  ( dilelya no cha digit cha factorial chi addition same no yayla pahije)
// Input --190 1!+4!+0!=190  FALSE  


// Note -- Boolean is a Datatype in java


import java.lang.*;
import java.util.*;


class Digits
{
	void CheckStrong(int iStart,int iEnd)
	{
	int temp=0,iFact=0,Sum=0,i=0,iNo=0;
	//          0,1,2,3,4,  5 , 6 ,7   , 8   , 9
	int fact[]={1,1,2,6,24,120,720,5040,40320,362880};   //array ghetla tyat already saglya nos chi factoril store keli apn
	
	
	if(iStart>iEnd)
	{
		return;
	}
	if((iStart<=0) || (iEnd<=0))
	{
		return;
	}
	
	for(i=iStart;i<=iEnd;i++)
	{
		iNo=i;
	while(iNo!=0)                    //loop to get digit
	{		
		Sum=Sum+fact[iNo%10];        //add the factorial of particular digit
		if(Sum >i)     // jr sum no peksha motha asel tr break
		{
			break;
		}
		iNo=iNo/10;           //remove that digit

	}
			if(Sum==i)
			{
			System.out.println(i);         
			}
			Sum=0;
		}
	}
}

class Demo3
{
	public static void main(String args[])
	{
		boolean bret=false;
		
		Digits dobj=new Digits();
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the Staring Range");
		int Value1=sobj.nextInt();
		System.out.println("Enter the Staring Range");
		int Value2=sobj.nextInt();
        dobj.CheckStrong(Value1,Value2);
		
	}
}