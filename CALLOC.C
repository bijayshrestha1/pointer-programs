#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i=0,n=0,j=0,*ptr=NULL,temp=0;
	clrscr();
	printf("enter how many no");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	printf("enter %d numbers \n",n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",ptr[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=1;j<=n-1;j++)
		{
			temp=ptr[i];
			ptr[i]=ptr[j];
			ptr[j]=temp;
			}
		}
		for(i=0;i<=n-1;i++)
		{
		scanf("%d",&n);
		ptr=(int*)calloc(n,sizeof(int));
		printf("enter %d numbers\n",n);
		for(i=0;i<=n-1;i++)
		{
			scanf("%d",ptr[i]);
		}
		for(i=0;i<=n-1;i++)
	{
		printf("%d",ptr[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=i-1;j<=n-1;j++)
		{
			temp=ptr[i];
			ptr[i]=ptr[j];
			ptr[j]=temp;
			}
		}
		for(i=0;i<=n-1;i++)
		{
			printf("%d",ptr[i]);
		}
		return(0);
		}
		}



