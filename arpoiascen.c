#include <stdio.h>
#include<conio.h>
int main()
{
   int *a,i,j,tmp,n;
   clrscr();
 	printf("\n\n Pointer : Sort an array using pointer :\n"); 	   
   printf(" Input the number of elements to store in the array : ");
   scanf("%d",&n);
   printf(" Input %d number of elements in the array : \n",n);
   for(i=0;i<n;i++)
      {
	  printf(" element of %d : ",i+1);
	  scanf("%d",a+i);
	  }   
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
       if( *(a+i) > *(a+j))
       {
      tmp = *(a+i);
      *(a+i) = *(a+j);
      *(a+j) = tmp;
       }
    }
   }
   printf("\n The elements in the array after sorting : \n");
   for(i=0;i<n;i++)
      {
	  printf(" element of %d : %d \n",i+1,*(a+i));
	  }         
printf("\n");
}
return(0);
}

