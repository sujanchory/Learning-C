#include<stdio.h>
int biggest_num(int a,int b)
{
  if(a>b)
    {
	return a;
    }   
    return b; 
}	

int main()
{
	int a,b,big;
	scanf("%d%d",&a,&b);
	big=biggest_num(a,b);
	printf("%d\n  ", a+b);
    printf("%d",big);
    
	return 0;	
	
}

	





















