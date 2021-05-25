#include<stdio.h>
int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=n;i>=1;i--)
		{
			for(j=i;j>1;j--)
			{
				printf(" ");
			}
			for(k=5;k>=i;k--)
			{
				printf("*");
			}
			printf("\n");
       }	
}

/* - - - - *
   - - - * *
   - - * * *
   - * * * *
   * * * * *
*/
