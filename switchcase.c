#include<stdio.h>
void main()
{
	int a,b,c,operator;
	printf("Enter value of a: \n");
	scanf("%d",&a);
	printf("Enter value of b: \n");
	scanf("%d",&b);
	printf("Enter your Choice of Operator: \n");
	printf("1. Addition \n");
	printf("2. Substraction \n");
	printf("3. Multiplication \n");
	printf("4. Division \n");
	printf("5. Modular Division \n");
	scanf("%d",&operator);
	switch(operator)
	{
		case 1:	
			{
				c=a+b;
				printf("The Result of your choice: %d \n",c);
			}break;
		case 2:	
			{
				c=a-b;
				printf("The Result of your choice: %d \n",c);
			}break;
		case 3:	
			{
				c=a*b;
				printf("The Result of your choice: %d \n",c);
			}break;
		case 4: 
			{
				c=a/b;
				printf("The Result of your choice: %d \n",c);
			}break;
		case 5: 
			{
				c=a%b;
				printf("The Result of your choice: %d \n",c);
			}break;
		default:
			{
				printf("You Have Entered not a valid choice. \n");
			}
	}
}
