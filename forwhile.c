#include<stdio.h>
void main()
{
	int i;
	printf("Select your choice: \n");
	printf("1. For\n2. While\n");
	scanf("%d",&i);
	printf("The given input is: %d\n",i);
	if(i==1)
	{
		for (int j=0;j<5;j++)
		{
			printf("%d\n",j);
		}
	}
	else if(i==2)
	{
		int j=0;
		while(j<5)
		{
			printf("%d\n",j++);
		}
	}
	else
	{
		printf("Invalid Choice, Please enter a valid choice.\n");
	}
}
