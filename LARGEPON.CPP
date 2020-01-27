#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,a[100];
printf("enter the number you want to enter");
scanf("%d", &n);
for(i=0;i<=n;i++)
{
printf("enter the %d number\n",i+1);
scanf("%d",a+i);
}
for(i=1;i<=n;i++)
{
if(*(a+0)<*(a+i))
{
*(a+0)=*(a+i);
}
}
printf("the largest number is %d",*(a+0));
getch();
return(0);
}
