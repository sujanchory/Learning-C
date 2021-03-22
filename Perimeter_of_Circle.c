#include<stdio.h>
int main()
{
float radius;
float pi=3.14;
float perimeter;
float area;
	printf("enter the radius");
	scanf("%f",&radius);
	perimeter=2*pi*radius;
	printf("perimeter=%f \n",perimeter );
	area=pi*radius*radius;
	printf("area=%f \n",area);
	return 0;
}
