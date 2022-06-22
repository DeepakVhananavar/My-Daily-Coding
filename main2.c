/* Programe Statement --Write a program which accept file name which contains information of
student and display all names of students whose name starts with the
letter P.   */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

struct Student
{
    int RollNo;
    char Name[20];
    int Marks;
};

void StudInfo(char *Fname, char *Sname)
{
    int fd = 0, ret = 0, iCnt = 0;
    struct Student sobj;

    int len = strlen(Sname);
    

    fd = open(Fname, O_RDONLY);
    if (fd == -1)
    {
        printf("Unable to open file\n");
        return;
    }
    else
    {
        printf("File opened/created successfully with fd %d\n", fd);
    }

    while ((ret = read(fd, &sobj, sizeof(sobj))) != 0)
    {
        int i = 0;

        while (Sname[i] != '\0')
        {
            if (sobj.Name[i] == Sname[i])
            {
                iCnt = 0;
            }
            else
            {
               iCnt = 1;
               break;
            }
            
            i++;
        }
        
        if (iCnt == 0)
        {
            
                printf("Name of Student:%s\n",sobj.Name);
        }       
    }
    
    close(fd);
}


int main()
{
char Name[50]= {'\0'};

char S[5]={'\0'};

printf("Enter the File Name:");
scanf("%s",Name);

printf("Enter the Charater to Search Name:=");
scanf(" %[^'\n']s",S);

StudInfo(Name,S);

return 0;
}