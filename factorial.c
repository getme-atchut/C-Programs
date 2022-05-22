#include<stdio.h>
void main()
{
	int a,fact=1,b;
	printf("Enter your number b:");
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
		fact=fact*a;
	}
	printf("The Factorial for the given number is: %d \n",fact);
}
