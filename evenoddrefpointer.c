#include<stdio.h>
void evenoddrefpoi(int *ptr);
int a,b;
void main()
{
	printf("Enter value of a:");
	scanf("%d",&a);
	evenoddrefpoi(&a);
	if(b==0)
	{
		printf("The Given Number a is EVEN NUMBER \n");
	}
	else
	{
		printf("The Given Number a is ODD NUMBER \n");
	}
}
void evenoddrefpoi(int *ptr)
{
	b=(*ptr)%2;
}
