#include<stdio.h>
void sumfun(int *ptr1,int *ptr2,int *ptr3);
void main()
{
	int a,b,c;
	a=10,b=30;
	sumfun(&a,&b,&c);
	printf("%d \n",c);
}
void sumfun(int *ptr1, int *ptr2, int *ptr3)
{
	*ptr3=(*ptr1)+(*ptr2);
}
