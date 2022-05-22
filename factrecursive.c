#include<stdio.h>
int fact(int x);
void main()
{
	int a,b;
	printf("Enter the number to find factorial: \n");
	scanf("%d",&a);
	b=fact(a);
	printf("The Factorial Value for the given number %d! is: %d \n",a,b);
}

int fact(int x)
{
	if(x!=0)
	{
		return(x*fact(x-1));	
	}
	else
	{
		return 1;
	}
}
