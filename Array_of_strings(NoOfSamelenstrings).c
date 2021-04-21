#include<stdio.h>
#include<string.h>
int main()
{
	char str[100][100];
	int i,size,maxpos,ml;
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
	ml=strlen(str[maxpos]);
	for(i=0;i<size;i++)
	{
	  printf("%d %s %d\n",i,str[i],strlen(str[maxpos]));	
	}		
}

