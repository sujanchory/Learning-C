#include<stdio.h>
int main()
{
   	int i,table,r1,r2;
    scanf("%d%d%d", &table,&r1,&r2);
     	if(r1<r2)
	{
			for(i=r1;i<=r2;i++)
		printf("%d * %d = %d\n",table,i,i*table);
	}
	   else
	{
	      for(i=r2;i<=r1;i++)
	   printf("%d * %d = %d\n",table,i,i*table);
	   
    }
	return 0;
}
