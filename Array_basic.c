#include<stdio.h>
int main()
{
	int i,arr[100],size;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	 } 
	 return 0;
}
