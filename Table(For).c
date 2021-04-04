#include<stdio.h>
int main()
{
	int table,i,t;
	scanf("%d" ,&table);
	for(i=1;i<=20;i++)
	{
		t=table*i;
		printf("%d x %d=%d\n ",table ,i ,t );
	}
	return 0;
}
