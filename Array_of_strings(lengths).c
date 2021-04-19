#include<stdio.h>
#include<string.h>
int main()
{
	char str[100][100];
	int i,size,len;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf(" %[^\n]s",&str[i]);
	}
		for(i=0;i<size;i++)
	{
	len=strlen(str[i]);
	printf("length of string is: %d\n",len);
    }
	
}
