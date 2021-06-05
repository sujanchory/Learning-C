#include<stdio.h>
int reverse_num(int num)
{
	int r,rev=0;
	while(num)
	{
		r=num%10;
		num=num/10;
		rev=rev*10+r;
	}

}
int main()
{
	int num,rev;
	scanf("%d",&num);
	rev=reverse_num(num);
	printf("%d",rev);
	

}
