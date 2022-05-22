#include<stdio.h>
void main()
{
	int ram;
	printf("Enter Percentage of ram:");
	scanf("%d",&ram);
	if(ram<=60)
	{
		printf("ram is in C Grade \n");	
	}
	else if(ram>60)
	{
		if(ram<=80)
		{
			printf("ram is in B Grade \n");
		}
		else
		{
			printf("ram is in A Grade \n");
		}
	}
	
}

