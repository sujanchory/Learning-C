#include<stdio.h>
fact(int n)
{
	int res;
	if(n==0)
	 return 1;
	else
	 return n*fact(n-1); 
}

int main()
{
	int res,m;
	printf("ENTER THE NUMBER: ");
	scanf("%d",&m);
	printf("%d",fact(m));	
}

