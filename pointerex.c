#include<stdio.h>
void main()
{
	int a,*ptr;
	printf("Enter value of a: \n");
	scanf("%d",&a);
	ptr=&a;
	printf("Address of value a:%d \n",ptr);
	printf("Value of a using pointer: %d \n",(*ptr));
}
