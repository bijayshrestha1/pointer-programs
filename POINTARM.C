#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,rem=0,sum=0,z=0,temp;
int *g=NULL,*h=NULL,*i=NULL,*j=NULL,*k=NULL;
clrscr();
printf("enter a number to find armstrong number or not\n");
scanf("%d",&a);
printf("a=%d",a);
temp = a;
g=&a; //j value dinxu tesko address <--
h=&rem;
i=&sum;
k =&temp;
while(*g>0)
{
*h=*g%10;
*i=*i+*h**h**h;
*g=*g/10;
}
printf("\n");
printf("i=%d,k=%d",*i,*k);
if(*k == *i)
{
printf("it is an armstrong\n");
}
else
{
printf("it is not an armstrong\n");
}
printf("the adress%u",&a);
getch();
}
