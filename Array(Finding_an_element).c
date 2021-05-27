#include<stdio.h>
int main()
{
	int i,arr[100],size,se,s=0;
	printf("Enter the size of Array ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element you want to search ");
	scanf("%d",&se);
	for(i=0;i<size;i++)
	{
		if(se==arr[i])
		{
			s=1;
			printf("Element Found");
			break;
		}
	
	 } 
	 	if(s==0)
		{
			printf("Element not found");
			
		}
	 return 0;
}
