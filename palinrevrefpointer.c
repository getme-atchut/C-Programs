#include<stdio.h>
void palinrefpoi(int *ptr);
int a,b,c,d;
void main()
{
	//int a,b,c=0,d;
	printf("Enter your number to check:");
	scanf("%d",&a);
	d=a;
	palinrefpoi(&a);
	printf("The Reverse number of your given input is: %d \n",c);
	if(d==c)
	{
		printf("The Number you entered is a PALINDROME NUMBER. \n");
	}
	else
	{
		printf("The Number you entered is NOT a PALINDROME NUMBER. \n");
	}
}
void palinrefpoi(int *ptr)
{
	while((*ptr)>0)
	{
		b=(*ptr)%10;
		c=(c*10)+b;
		*ptr=(*ptr)/10;
	}
}
