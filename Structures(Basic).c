#include<stdio.h>
struct emp
 { 
	int eno;
	char ename[20];
	float esal;
 } ;
 void main()
 {
 	struct emp e ={1,"sujan",3000000};
 	printf("Emp Number: %d\n",e.eno);
 	printf("Emp Name: %s\n",e.ename);
 	printf("Emp Salary: %f\n",e.esal);
 }
 
 
