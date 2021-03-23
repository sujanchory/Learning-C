//count of digits in a number
#include<stdio.h>
int main()
{
	int num,r,i=0;
	scanf("%d",&num);
	while (num!=0)
	{
		r=num%10;
		num=num/10;
		++i;
		
		
	}
	printf("%d",i);
	return 0;
}

