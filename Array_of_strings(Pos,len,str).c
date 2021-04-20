#include<stdio.h>
#include<string.h>
int main()
{
	char str[100][100];
	int i,size,maxpos;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf(" %[^\n]s",&str[i]);
	}
	maxpos=0;
	for(i=0;i<size;i++)
	{
		if(strlen(str[i])>strlen(str[maxpos]))
		{
			maxpos=i;
		}
	}
	printf("%d %s %d", maxpos,str[maxpos],strlen(str[maxpos]));
			
}

