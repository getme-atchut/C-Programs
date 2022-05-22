#include<stdio.h>
int sumseries(int x);
void main()
{
	int a,b;
	printf("Enter your range: \n");
	scanf("%d",&a);
	b=sumseries(a);
	printf("The Sum of series:%d\n",b);
}

int sumseries(int x)
{
	if(x!=0)
	{
		return (x+sumseries(x-1));
	}
	else
	{
		return 0;
	}
}
