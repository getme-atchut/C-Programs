#include<stdio.h>
void main()
{
	int a,b,c,operator,i=1;
	while(i>0)
	{
		printf("Enter your Choice of Operator: \n");
		printf("1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n5. Modular Division\n6. Quit\n");
		scanf("%d",&operator);
		switch(operator)
		{
			case 1:
			{
				printf("Enter value of a: \n");
       				scanf("%d",&a);
       				printf("Enter value of b: \n");
       				scanf("%d",&b);
				c=a+b;
				printf("The Result of your choice: %d \n",c);
			}break;
			case 2:
			{
				printf("Enter value of a: \n");
       				scanf("%d",&a);
       				printf("Enter value of b: \n");
       				scanf("%d",&b);
				c=a-b;
				printf("The Result of your choice: %d \n",c);
			}break;
			case 3:
			{
				printf("Enter value of a: \n");
       				scanf("%d",&a);
       				printf("Enter value of b: \n");
       				scanf("%d",&b);			
				c=a*b;
				printf("The Result of your choice: %d \n",c);
			}break;
			case 4:
			{
				printf("Enter value of a: \n");
       				scanf("%d",&a);
       				printf("Enter value of b: \n");
       				scanf("%d",&b);
				c=a/b;
				printf("The Result of your choice: %d \n",c);
			}break;
			case 5:
			{
				printf("Enter value of a: \n");
       				scanf("%d",&a);
       				printf("Enter value of b: \n");
       				scanf("%d",&b);
				c=a%b;
				printf("The Result of your choice: %d \n",c);
			}break;
			case 6:
			{
				i=0;
			}break;
			default:
			{
				printf("You Have Entered not a valid choice. \n");
			}
		}		
	}
}
