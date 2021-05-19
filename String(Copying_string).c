//string copying into another string
#include<stdio.h>
int main()
{
char str[100],str2[100];
int i,len=0;
printf("Enter String: ");
scanf("%[^\n]s",&str);
 for(i=0;str[i]!='\0';i++);
 len=i;
 for(i=0;i<len;i++)
 {
 	str2[i]=str[i];
 }
 str2[i]='\0';
 printf(" %s",str2);
}
