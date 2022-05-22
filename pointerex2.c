#include<stdio.h>
void main()
{
	int a,b,*ptr1,*ptr2;
	printf("Enter value of a: \n");
	scanf("%d",&a);
	printf("Address of a: %d\n",&a);
	printf("Enter value of b: \n");
	scanf("%d",&b);
	printf("Address of b: %d \n",&b);
	ptr1=&a;
	ptr2=&b;
	printf("The value pointer 1: %d \n",ptr1);
	printf("The value pointer 2: %d \n",ptr2);
	printf("The address of pointer 1: %d\n",&ptr1);
	printf("The address of pointer 2: %d\n",&ptr2);
	printf("Value of a using pointer is: %d \n",(*ptr1));
	printf("Value of b using pointer is: %d \n",(*ptr2));
	*ptr1=(*ptr1)*(*ptr2);
	printf("Multiplication using pointers: %d \n",(*ptr1));
}
