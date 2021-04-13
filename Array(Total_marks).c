#include<stdio.h>
int main()
{
	int i,marks[100],total=0,sc;
	scanf("%d",&sc);
	for(i=0;i<sc;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<sc;i++)
	{
		total+=marks[i];
	 } 
	 printf("%d ",total);
	 return 0;
}
