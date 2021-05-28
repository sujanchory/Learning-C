#include<stdio.h>
int main()
{
char str[100];
int i,len=0;
printf("Enter String: ");
scanf("%[^\n]s",&str);
 for(i=0;str[i]!='\0';i++);
 len=i;
 printf("%d",len);
}
