#include<stdio.h>
int main()
{
	char str[100];
	int i=0;
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+32;
			
		}
		i++;
	}
	printf("%s",str);
}
