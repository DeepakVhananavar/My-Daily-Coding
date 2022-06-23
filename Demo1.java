/* Programe Statement --Write a java program which accepts 2 strings from user and
concat N characters of second string after first string.Value of N
should be accepted from user.
Note : If third parameter is greater than the size of second string
then concat whole string after first string.
Input : Marvellous Infosystems
Logic Building
5
Output : Marvellous Infosystems Logic   */


import java.lang.*;
import java.util.*;


class DemoString
{
	void StrnCat(String src,String dest,int iNo)
	{	
		int i=0,j=0,iCnt=0;
		char arr[]=src.toCharArray();
		char des[]=dest.toCharArray();
		while((des[i])!='\0')
		{
		 iCnt++;
		}

		while(arr[i]!='\0')
			{
				i++;
			}
		if(iNo > iCnt)
		{	
			
			while(des[j]!='\0')
			{
			arr[i]=des[j];
			i++;
			j++;
			}
		}
		else
		{
			for(i=0;i<iNo;i++)
			{
				arr[i]=des[j];
				j++;
			}

		}
		des[j]='\0';

		System.out.println(""+arr);
		}
	}


class Demo1
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		DemoString dobj=new DemoString();
		System.out.println("Enter the String 1");
		String str1=sobj.nextLine();
		System.out.println("Enter the Second String");
		String str2=sobj.nextLine();
		System.out.println("Enter the Number");
		int iNo=sobj.nextInt();
		dobj.StrnCat(str1,str2,iNo);
	}
}