//Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.
//Input : E Output : TRUE
//Input : d Output : FALSE

#include<stdio.h>
 typedef int BOOL;     

 #define TRUE 1      // MACRO Defination
 #define FALSE 0

 BOOL CheckVowel(char cVal)
 {
 	
 if((cVal>=32 )&&(cVal<=64))					// Filter for Invalid op if user puts any number or other symbol
  {
	printf("Invalid Input!!\n");
	return -1;
  }
  if((cVal=='A')||(cVal=='E')||(cVal=='I')||(cVal=='O')||(cVal=='U')||(cVal=='a')||(cVal=='e')||(cVal='i')||(cVal='o')||(cVal='u'))
  {
  return 1;
  }
  else
  {
  return 0;	
  }	
 }

 int main()
 {
 char cValue='\0';
 BOOL bRet= FALSE;         // initialize to FALSE 
 printf("Enter the Charcter to check:= ");
 scanf("%c",&cValue);
 bRet=CheckVowel(cValue);
 if(bRet==1)
 {
 printf("%c is a vowel\n",cValue);
 }
 else
 {
 printf("%c is not a vowel\n",cValue);
 }
 return 0;
 } 