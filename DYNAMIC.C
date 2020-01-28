#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int n=0,i=0,*ptr=NULL;
	clrscr();
	printf("enter how many numbers you want:\n");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	ptr[0]=0;
	ptr[1]=1;
	printf("%d %d",ptr[0],ptr[1]);

	if(ptr==NULL)
	{
		printf("memory allocation unsuccesful");
	}
	else
	{
		for(i=2;i<n-1;i++)
		{
			ptr[i]=ptr[i-1] + ptr[i-2];
			printf("%d",ptr[i]);
		}
	}
	getch();
	}