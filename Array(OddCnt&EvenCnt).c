#include<stdio.h>
int main()
{
	int i,arr[100],size,n=0,m=0;
	printf("Enter Size Of Array");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter Numbers");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==1)
		n++;
	    else
	    m++;
	 }   
	 printf("Odd=%d\tEven=%d",n,m);	 
	 return 0;
}
