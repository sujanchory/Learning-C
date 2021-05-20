#include<stdio.h>
int main()
{
char str[100];
int i;
printf("Enter String: ");
scanf("%[^\n]s",&str);
 for(i=0;str[i]!='\0';i++)
  {  
	printf(" %c\n",str[i]);
  } 
}
