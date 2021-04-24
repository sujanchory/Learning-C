#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
int len;
printf("Enter String: ");
scanf("%[^\n]s",&str1);
strcpy(str2,str1);
printf("%s",str2);
}
