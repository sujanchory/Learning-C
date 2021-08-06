#include<stdio.h>
#include<stdlib.h>
int main () 
{
   char *title;
   title = (char *) malloc(15);
   strcpy(title, "c programming");
   printf("Before modification : String = %s,  Address = %u\n", title, title);
   
   title = (char*) realloc(title, 30);
   
   strcpy(title,"C Programming Language");
   printf("After modification : String = %s,  Address = %u\n", title, title);
   
   free(title);//here the memory gets deallocated
   
   return(0);
   
}

