#include<stdio.h>
void main()
{
	int a=50,b=60;
	callbyref(&a,&b);
	printf("%d\n%d\n",a,b);
}

callbyref(int *ptr1, int *ptr2)
{
	*ptr1=10;
	*ptr2=5;
}
