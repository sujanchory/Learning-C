#include<stdio.h>
int main()
{
	int arr[50],i,j,s,key,loc;
	printf("enter the size of array ");
	scanf("%d",&s);
	printf("Enter elements ");
	for(i=0;i<s;i++)
	{
	 scanf("%d",&arr[i]);
	}
	
	printf("enter element to insert ");
	scanf("%d",&key);
	printf("enter location ");
	scanf("%d",&loc);
	
	for(i=s-1;i>=loc;i--) 
	{
		arr[i+1]=arr[i]	;	
	}
	 
	arr[loc]=key;
	 
	for(i=0;i<s+1;i++)
	{
	   printf("%d ",arr[i]);
	}	
}
