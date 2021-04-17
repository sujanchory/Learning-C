//addition of 2 matrix
#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],c[50][50];
	int i,j,c1,r1,r2,c2;
	printf("enter r1,c1\n  ");
	scanf("%d%d",&r1,&c1);
    printf("enter matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter r2,c2\n  ");
	scanf("%d%d",&r2,&c2);
	printf("enter matrix\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{   
			scanf("%d",&b[i][j]);
		}
	}
 if(r1==r2 && c1==c2)
 {
 	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}
else
{
	printf("Addition not possible");
}
  printf("addition of matrix\n");
	for(i=0;i<r2;i++)
	      {
	     	for(j=0;j<c2;j++)
		    {
		     printf("%d  ",c[i][j]);
            }
	        printf("\n");
		  } 
}

