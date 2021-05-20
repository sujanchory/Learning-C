#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int len;
printf("Enter String: ");
scanf("%[^\n]s",&str);
len=strlen(str);
printf("%d",len);
}
