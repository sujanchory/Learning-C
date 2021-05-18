#include<stdio.h>
int main()
{
	int a,b,*ptr1,*ptr2,sum=0;
	scanf("%d%d",&a,&b);
	ptr1=&a;
	ptr2=&b;
	sum=*ptr1+*ptr2;
	printf("%d",sum);
}

