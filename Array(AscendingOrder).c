#include<stdio.h>
int main()
{
	int arr[100],size,i,j,temp;
	printf("enter the size of array:");
	scanf("%d",&size);
	printf("enter elements in the array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
    	printf("\nelements of array in sorted asscending order:\n");
    	for(i=0;i<size;i++)
    	{
    		printf("%d ",arr[i]);
		}
		return 0;
}
