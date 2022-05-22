#include<stdio.h>
void add();
void sub();
void mul();
void div();
void mdiv();
int a,b,c,operator;
void main()
{
	//int a,b,c,operator;
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
				add();
			}break;
		case 2:	
			{
				sub();
			}break;
		case 3:	
			{
				mul();
			}break;
		case 4: 
			{
				div();
			}break;
		case 5: 
			{
				mdiv();
			}break;
		default:
			{
				printf("You Have Entered not a valid choice. \n");
			}
	}
}
void add()
{
	c=a+b;
	printf("The Result of your choice: %d \n",c);
}
void sub()
{
	c=a-b;
	printf("The Result of your choice: %d \n",c);
}
void mul()
{
	c=a*b;
	printf("The Result of your choice: %d \n",c);
}
void div()
{
	c=a/b;
	printf("The Result of your choice: %d \n",c);
}
void mdiv()
{
	c=a%b;
	printf("The Result of your choice: %d \n",c);
}
