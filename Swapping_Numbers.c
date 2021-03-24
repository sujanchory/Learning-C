#include<stdio.h>
int main()
{
	int tab,i,r1,r2;
	scanf("%d%d %d",&tab,&r1,&r2);//3 8 3
	if(r1>r2)//8 3
	{
		r1=r1+r2;//11
		r2=r1-r2;//8
		r1=r1-r2;//3
	}
	for(i=r1;i<=r2;i++)
	{
		printf("%d * %d = %d\n", tab , i , tab*i);
	}
	return 0;
}
