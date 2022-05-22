#include<stdio.h>
void primerefpoi(int *ptr);
int a,b,d,e,count;
void main()
{
	printf("Enter the value to check: \n");
	scanf("%d",&a);
	//e=prime(a);
	primerefpoi(&a);
	if(count==2)
	{
		printf("The Given value is PRIME Number. \n");
	}
	else
	{
		printf("The Given value is NOT a PRIME Number. \n");
	}
}
void primerefpoi(int *ptr)
{
	for(b=1;b<=(*ptr);b++)
	{
		d=(*ptr)%b;
		if(d==0)
		{
			count++;
		}
	}
}
