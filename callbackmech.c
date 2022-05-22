#include<stdio.h>
void main()
{
	void (*fp)();
	fp=fun();
	fun1(fp);
}
void fun()
{
	printf("Hello Function \n");
}
void fun1(void (*fp1)())
{
	(*fp1)();
	printf("Hello Function2 \n");
}
