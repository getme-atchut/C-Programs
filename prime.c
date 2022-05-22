#include<stdio.h>
int prime(int a);
int a,b,d,e,count;
void main()
{
	printf("Enter the value to check: \n");
	scanf("%d",&a);
	e=prime(a);
	if(e==2)
	{
		printf("The Given value is PRIME Number. \n");
	}
	else
	{
		printf("The Given value is NOT a PRIME Number. \n");
	}
}
int prime(int x)
{
	for(b=1;b<=x;b++)
	{
		d=x%b;
		if(d==0)
		{
			count++;
		}
	}
	return count;
}
