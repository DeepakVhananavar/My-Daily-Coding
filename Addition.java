
//Application to Add two numbers 

/*
1-main madhla class name n save keli file name same pahije
2- java is complete object oriented programming lang so aplyla kahi  call krych asel tr tyacha object banvaycha
3- logic aslelya function cha baher kahi lehaycha nhii 


*/




import java.lang.*;
import java.util.*;                     // for Scanner input ghyala

class Arithmatic                                          // ya class cha baher kahi lehaycha nhii                                           
{
int Add(int ino1,int ino2)
{
int iResult=0;
iResult=ino1+ino2;
return iResult;
}
}


class Addition                                             // main class
{
public static void main(String arg[])
{
int iValue1=0,iValue2=0,ret=0;
Scanner sobj=new Scanner(System.in);                       // same as scanf to accept values 
System.out.println("Enter the Number :"); 
iValue1=sobj.nextInt();
System.out.println("Enter the Second Number:");
iValue2=sobj.nextInt();

Arithmatic aobj=new Arithmatic();               //Arithmatic class cha object create krun function call krycha
ret=aobj.Add(iValue1,iValue2);


System.out.println("Addition is :"+ret);
}
}

