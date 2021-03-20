#include<stdio.h>
int even_odd(int);
int main()
{
	int a,res;
	scanf("%d",&a);
	res=even_odd(a);
	if(res==1)
	{
		printf("even");
	}
	else
	{
		printf("odd");
		
	}
   return 0 ;
   }
   int even_odd(int num)
   {
   	if (num%2==0)   
	   {
	   	return 1;
	   }
	   else
	   {
	   	return 0;
	   	
	   }
	}
