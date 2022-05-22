#include<stdio.h>
void add();
int sub();
int mul();
void div();
void mdiv();
int a,b,c,operator;
void main()
{
	//int a,b,c,operator;
	//printf("Enter value of a: \n");
	//scanf("%d",&a);
	//printf("Enter value of b: \n");
	//scanf("%d",&b);
	int i=1;
	while(i>0)
	{
		printf("Enter your Choice of Operator: \n");
		printf("1. Addition \n");
		printf("2. Substraction \n");
		printf("3. Multiplication \n");
		printf("4. Division \n");
		printf("5. Modular Division \n");
		printf("6. Exit \n");
		scanf("%d",&operator);
		switch(operator)
		{
			case 1:	
				{
					printf("Enter a value: \n");
					scanf("%d",&a);
					printf("Enter b value: \n");
					scanf("%d",&b);
					add(a,b);
				}break;
			case 2:	
				{
					printf("Enter a value: \n");
					scanf("%d", &a);
					printf("Enter b value: \n");
					scanf("%d", &b);
					sub(a,b);
					int d;
					d=c;
					printf("The result of your choice is:%d\n",d);
				}break;
			case 3:	
				{
					mul();
					int d;
					d=c;
					printf("The result of your choice is:%d\n",d);
				}break;
			case 4: 
				{
					printf("Enter a value: \n");
					scanf("%d",&a);
					printf("Enter b value: \n");
					scanf("%d",&b);
					div();
				}break;
			case 5: 
				{
					printf("Enter a value: \n");
					scanf("%d",&a);
					printf("Enter b value: \n");
					scanf("%d",&b);
					mdiv();
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
void add(int x,int y)
{
	c=x+y;
	printf("The Result of your choice: %d \n",c);
}
int sub(int x,int y)
{
	c=x-y;
	return c;
}
int mul()
{
	printf("Enter a value: \n");
	scanf("%d",&a);
	printf("Enter b value: \n");
	scanf("%d",&b);
	c=a*b;
	return c;
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
