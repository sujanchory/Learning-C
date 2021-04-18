#include<stdio.h>
int main()
{
	int i,arr[100],size,bignum=0;
	printf("Enter Size Of Array");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter Numbers");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]>bignum)
		{
		bignum=arr[i];
		}
    }   
	 printf("%d",bignum);	 
	 return 0;
}
