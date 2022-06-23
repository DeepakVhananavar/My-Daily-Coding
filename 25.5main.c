#include<stdio.h>

void Display(char ch)
{
if((ch==65) || (ch==97))
{
printf("Exam time of Div A is:7:00 AM\n");
return;
}

else if((ch==66) || (ch==98))
{
printf("Exam time of Div B is:8:30 AM\n");
return;
}

else if((ch==67) || (ch==99))
{
printf("Exam time of Div C is :9:20 AM\n");
return;
}

else if((ch==68) || (ch==100))
{
printf("Exam time of Div D is:10:30 AM\n");
return;
}

else
{
	printf("There is no Such Division\n");
	return;
}
}
int main()

{
char cValue='\0';
printf("Enter the Division :\n");
scanf("%c",&cValue);
Display(cValue);
return 0;
}

