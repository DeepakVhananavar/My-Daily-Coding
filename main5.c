/* Programe Statement ---Write a program which accept file name which contains information of
student and display addition of marks of all sudents.   */


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>


struct Student
{
int Rollno;
char name[20];
int marks;
};
 
int  AddMarks(char *Name)
{

int fd=0,ret=0,i=0;
int Sum=0;
struct Student sobj;
fd=open(Name,O_RDONLY);
if(fd==-1)
{
printf("Unable to Open the file \n");
return -1;
}
printf("Data from the File is:\n");
while(ret=read(fd,&sobj,sizeof(sobj))!=0)
{
printf("Mark  of Student is :=%d\n",sobj.marks);
Sum=Sum+(sobj.marks);
}
return Sum;
close(fd);
}

int main()
{
char name[50]={'\0'};
int iRet=0;
printf("Enter the File name:\n");
scanf("%s",name);


iRet=AddMarks(name);
printf("Addition of Marks is:=%d",iRet);
return 0;
}