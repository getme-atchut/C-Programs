#include<stdio.h>
int fibo(int x);
void main()
{
	int i,range;
	printf("Enter minimum range: \n");
	scanf("%d",&i);
	printf("Enter maximum range: \n");
	scanf("%d",&range);
	printf("Fibanocci Series: \n");
	for(;i<range;i++)
	{
		printf("%d ",fibo(i));
	}
	printf("\n");
}

int fibo(int x)
{
	if(x==0)
	{
		return 0;
	}
	else if(x==1)
	{
		return 1;
	}
	else
	{
		return(fibo(x-1)+fibo(x-2));
	}
}
