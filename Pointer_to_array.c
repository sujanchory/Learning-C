int main()
{
 int marks[6] = {89, 45, 58, 72, 90, 93} ;
 int *ptr ;
 ptr = &marks;
 printf("Base Address of 'marks' array = %u\n",ptr);
 printf("Displaying array elements with pointer \n ");
 printf("%d\n",*(ptr+0)); //1st element of the array
 printf("%d\n",*(ptr+1)); //2nd element of the array
 printf("%d\n",*(ptr+2)); //3rd element of the array
 printf("%d\n",*(ptr+3)); //4th element of the array
 printf("%d\n",*(ptr+4)); //5th element of the array
 printf("%d\n",*(ptr+5)); //6th element of the array
}
