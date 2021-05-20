#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int rev;
printf("Enter String: ");
scanf("%[^\n]s",&str);
rev=strrev(str);
printf("%s",rev);
}
