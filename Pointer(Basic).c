#include<stdio.h>
void main()
{
	int i=100;
	int* ptr=i;
	ptr=&i;
	printf("%u\n",i);//100
	printf("%u\n",&i);//x
	printf("%u\n",ptr);//x
	printf("%u\n",&ptr);//y
    printf("%u\n",*ptr);//100
    printf("%u\n",*(&i));//100
}
