/* Programe Statement -- 1--Write a program which accept oinformation of students from user and
write that information into the file.

2--Write a program which read all the information of students from the    */

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


void FileWrite(char *Name)
{
int fd=0,i=0,isize=0;
struct Student sobj;
fd=open(Name,O_WRONLY);
if(fd==-1)
{
printf("Unable to Open the File:\n");
return;
}
printf("Enter the Number  of Students :\n");
scanf("%d",&isize);

for(i=1;i<=isize;i++)
{
printf("Enter the Rollno :\n");
scanf("%d",&sobj.Rollno);

printf("Enter the Students Name:");
scanf("%s",&sobj.name);

printf("Enter the Students Marks:\n");
scanf("%d",&sobj.marks);

write(fd,&sobj,sizeof(sobj));
} 
close(fd);
}


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
printf("Rollno is:=%d\t",sobj.Rollno);
printf("Student's Name is:=%s\t",sobj.name);
printf("Mark  of Student is :=%d\n",sobj.marks);
}

close(fd);
}

int main()
{
char name[50]={'\0'};

printf("Enter the File name:\n");
scanf("%s",name);

//FileWrite(name);
FileRead(name);

return 0;
}