//string encatination
#include<stdio.h>
int main()
{
char str1[100],str2[100];
int i,j,k,temp=0;
printf("Enter String: ");
scanf("%[^\n]s",&str1);
scanf(" %[^\n]s",&str2);
for(i=0;str1[i]!='\0';i++);
k=i;
str1[k++]=' ';
for(i=0;str2[i]!='\0';i++,k++)
{
	str1[k]=str2[i];
}
str1[k]='\0';
printf("%s",str1);
}


