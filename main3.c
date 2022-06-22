/* Programe Statement --  Write a program which accept file name which contains information of
student and Display only names of students */


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
 
void FileRead(char *Name)
{

int fd=0,ret=0,i=0;

struct Student sobj;
fd=open(Name,O_RDONLY);
if(fd==-1)
{
printf("Unable to Open the file \n");
return;
}
printf("Data from the File is:\n");
while(ret=read(fd,&sobj,sizeof(sobj))!=0)
{
printf("Student's Name is:=%s\t",sobj.name);
}

close(fd);
}

int main()
{
char name[50]={'\0'};

printf("Enter the File name:\n");
scanf("%s",name);


FileRead(name);

return 0;
}