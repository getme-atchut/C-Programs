#include<stdio.h>
void main()
{
	int a,b,c=0,d;
	printf("Enter your number to check:");
	scanf("%d",&a);
	d=a;
	while(a>0)
	{
		b=a%10;
		c=(c*10)+b;
		a=a/10;
	}
	if(d==c)
	{
		printf("The Number you entered is a PALINDROME NUMBER. \n");
	}
	else
	{
		printf("The Number you entered is NOT a PALINDROME NUMBER. \n");
	}
}
