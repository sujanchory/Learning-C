#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if(num>=0)
	{if(num==0)
		printf("neither positive nor negative");
		else
		printf("positive");	}
	else 
	{printf("negative"); } 
	return 0;
}
