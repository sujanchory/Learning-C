#include<stdio.h>
int main()
{
	int i,arr[100],size,n=0,m=0;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<size;i++)
	{
		if(arr[i]%2==1)
		n++;
	    else
	    m++;
	 }   
	 printf("odd=%d\teven=%d",n,m);	 
	 return 0;
}
