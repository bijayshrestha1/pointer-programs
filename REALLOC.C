#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *dd;
	dd=(char*)calloc(20,sizeof(char));
	if(dd==NULL)
	{
		printf("memory allocation unsuccesful");
	}
	else
	{
		strcpy(dd,"my name is mud");
	}
	printf("the content of the allocated memory is %s\n",dd);
	dd=(char*)realloc(dd,40*sizeof(char));
	if (dd==NULL)
	{
		printf("memory allocation error");
	}
	else
	{
		strcat(dd,"but it is bijay");
	}
	printf("the final context is %s\n",dd);
	getch();
	}