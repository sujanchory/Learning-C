#include<stdio.h>
int main()
{
	int num1,num2;
	float result;
	printf("enter the value of num1");
	scanf("%d",&num1);
	printf("enter the value of num2");
	scanf("%d",&num2);
	result=num1/num2;
	printf("%d/%d=%f",num1,num2,result);
	return 0;
}
