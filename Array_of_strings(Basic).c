//array of strings(2D Strings)
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100][100];
	int i,size;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf(" %[^\n]s",&str[i]);
	}
	for(i=0;i<size;i++)
	{
		printf(" %s\n",str[i]);
	}
}
