#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter value of a:");
	scanf("%d",&a);
	b=a%2;
	if(b==0)
	{
		printf("The Given Number a is EVEN NUMBER \n");
	}
	else
	{
		printf("The Given Number a is ODD NUMBER \n");
	}
}
