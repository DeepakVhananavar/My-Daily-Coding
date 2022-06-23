/*Program Statement-.Write a program which checks whether 15th bit is On or OFF.


/*
    Binary to Hexadecimal conversion
 
    Integer size = 4 bytes      ie 32 bits
 
    Hexadecimal cha base : 16
    Hexadecimal chi range is 0  to 15

Decomal             Binary              Hexadecimal
 0                      0000                        0
1                       0001                        1
2                       0010                        2
 3                      0011                        3
 4                      0100                        4
 5                      0101                        5
 6                      0110                        6
 7                      0111                        7
 8                      1000                        8
 9                      1001                        9
 10                    1010                        a
 11                    1011                        b
 12                    1100                        c
 13                    1101                        d
 14                    1110                        e
 15                    1111                        f
 
    For the 16 we requre 4 bits from binary.                (1111)
 
 
 Number re[resentation in Hexadecimal
 
 Number : 86
    
 
 
        0000    0000    0000    0000    0000    0000     0101   0110
        0           0           0           0       0           0           5       6
 
Hexadecimal : 0X00000056
 
 */

/*
    Mask designing :
 
 As we want to check the status of fourth bit we just create the mask whose fourth bit is on.
 
 Mask :  0000       0000            0000            0000        0000            0000       0000        1000
                0           0                   0                   0           0                   0           0              8
 
 Hexadecimal mask : 0X00000008
 
 0X01000000
 */


#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckOn(int iValue)
{
int iResult=0;
int iMask=0X00004000;   
if(iValue<0)
{
iValue=-iValue;
}
iResult=iValue & iMask;
if(iResult==iMask)
{
return TRUE;
}
else
{
return FALSE;
}
}



int main()
{
int iNo=0;
BOOL bRet=FALSE;

printf("Enter the Number=:");
scanf("%d",&iNo);

bRet=CheckOn(iNo);
if(bRet==TRUE)
{
printf("15th Bit is On");
}
else
{
printf("15th Bit is OFF");
}
return 0;
}



