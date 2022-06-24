// Accept number from user and check whether that number is strong number or not
//strong number is such a no whose summation of factorial of digits is same sa its number
// Input --145  1!+4!+5!=145  TRUE  ( dilelya no cha digit cha factorial chi addition same no yayla pahije)
// Input --190 1!+4!+0!=190  FALSE  


// Note -- Boolean is a Datatype in java


import java.lang.*;
import java.util.*;

class Digits
{
	boolean CheckStrong(int iNo)
	{
	int temp=0,iFact=0,Sum=0;
	//          0,1,2,3,4,  5 , 6 ,7   , 8   , 9
	int fact[]={1,1,2,6,24,120,720,5040,40320,362880};   //array ghetla tyat already saglya nos chi factoril store keli apn
	if(iNo<0)
	{
		iNo=-iNo;
	}
	temp=iNo;
	while(iNo!=0)                    //loop to get digit
	{
		int digit=0;
		digit=iNo%10;              //digit
		
		iNo=iNo/10;           //remove that digit
		Sum=Sum+fact[digit];        //add the factorial of particular digit
		if(Sum >temp)     // jr sum no peksha motha asel tr break
		{
			break;
		}
		iFact=1;             //reset the variable
	}
	if(temp==Sum)
		{
		return true;         // true or False small letter madhi lehla tri chalta
		}
		else
		{
		return false;
		}
	}
}
class Demo2
{
	public static void main(String args[])
	{
		boolean bret=false;
		
		Digits dobj=new Digits();
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the Number");
		int Value=sobj.nextInt();
		bret=dobj.CheckStrong(Value);
		if(bret==true)
		{
			System.out.println("Number is Strong");
		}
		else
		{
			System.out.println("Number is Not Strong");
		}
	}
}