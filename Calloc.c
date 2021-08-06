#include<stdio.h>
#include<stdlib.h>
int main () 
{
   int i, n;
   int *ptr;
   printf("Number of blocks to be created:");
   scanf("%d",&n);
   ptr = (int*)calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",n);
   
   for( i=0 ; i < n ; i++ ) 
   {
      scanf("%d",ptr+i);
   }
   printf("The numbers entered are: ");
   
   for( i=0 ; i < n ; i++ ) 
   {
      printf("%d ",*ptr+i);
   }
free(ptr);
ptr=NULL;   
return(0);
}
