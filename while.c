#include<stdio.h>
void main()
{
	printf("program start\n");
	int a,b,c,operator,i=0;
	while(i<5)
	{
		printf("Enter value of a: \n");
		scanf("%d",&a);
		printf("Enter value of b: \n");
		scanf("%d",&b);
		printf("Enter your Choice of Operator: \n");
		printf("1. Addition (+) \n");
		printf("2. Substraction (-) \n");
		printf("3. Multiplication (*) \n");
		printf("4. Division (/) \n");
		printf("5. Modular Division (%) \n");
		scanf("%d",&operator);
		if(operator == 1)
		{
			c=a+b;
			printf("The Result of your choice: %d \n",c);
		}
		else if(operator == 2)
		{
			c=a-b;
			printf("The Result of your choice: %d \n",c);
		}
		else if(operator == 3)
		{
			c=a*b;
			printf("The Result of your choice: %d \n",c);
		}
		else if(operator == 4)
		{
			c=a/b;
			printf("The Result of your choice: %d \n",c);
		}
		else if(operator == 5)
		{
			c=a%b;
			printf("The Result of your choice: %d \n",c);
		}
		else
		{
			printf("You Have Entered not a valid choice. \n");
		}
		i++;
	}	
}
