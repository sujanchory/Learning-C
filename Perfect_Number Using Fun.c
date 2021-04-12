#include<stdio.h>
int Perfect_num(int n)
{
int i,sum=0;	
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
		 sum=sum+i;
        }
    }
	    return sum;
}
int main()
{
int n,sum,m;
scanf("%d",&n);
sum=Perfect_num(n);
	if(sum==n)
	{
	printf("%d is a Perfect Number",n);
	}
	else
	{ 
	printf("%d is not a Perfect Number",n);
	}
	return 0;
}
