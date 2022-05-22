#include<stdio.h>
void main()
{
	unsigned int *ptr,*ptr1,a=10;
	char b="Hai";
	ptr=&a;
	printf("Address of pointer PTR: %d \n",ptr);
	ptr=ptr+4;
	printf("Adding 4 to pointer PTR: %d \n",ptr);
	printf("Pre-Increment of Pointer PTR: %d \n", ptr++);
	printf("Post-Increment of pointer PTR: %d \n",++ptr);
	printf("Pre-Decrement of pointer PTR: %d \n",ptr--);
	printf("Post-Decrement of pointer PTR: %d \n",--ptr);
	printf("Subtracting PTR-4: %d \n",ptr-4);
	printf("Subtracting PTR-1: %d \n",ptr-1);
	printf("Address of pointer PTR1: %d \n",ptr1);
	ptr1=ptr1+4;
	printf("Adding 4 to pointer PTR: %d \n",ptr1);
	printf("Pre-Increment of Pointer PTR1: %d \n", ptr1++);
	printf("Post-Increment of pointer PTR1: %d \n",++ptr1);
	printf("Pre-Decrement of pointer PTR1: %d \n",ptr1--);
	printf("Post-Decrement of pointer PTR1: %d \n",--ptr1);
	printf("Subtracting PTR-4: %d \n",ptr1-4);
	printf("Subtracting PTR-1: %d \n",ptr1-1);
}
