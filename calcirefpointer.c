#include<stdio.h>
void add(int *ptr1,int *ptr2, int *ptr3);
void sub(int *ptr1,int *ptr2, int *ptr3);
void mul(int *ptr1,int *ptr2, int *ptr3);
void div(int *ptr1,int *ptr2, int *ptr3);
void mdiv(int *ptr1,int *ptr2, int *ptr3);
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
				add(&a,&b,&c);
				printf("The Result Value of C = %d \n",c);
			}break;
		case 2:	
			{
				sub(&a,&b,&c);
				printf("The Result Value of C = %d \n",c);
			}break;
		case 3:	
			{
				mul(&a,&b,&c);
				printf("The Result Value of C = %d \n",c);
			}break;
		case 4: 
			{
				div(&a,&b,&c);
				printf("The Result Value of C = %d \n",c);
			}break;
		case 5: 
			{
				mdiv(&a,&b,&c);
				printf("The Result Value of C = %d \n",c);
			}break;
		default:
			{
				printf("You Have Entered not a valid choice. \n");
			}
	}
}
void add(int *ptr1,int *ptr2,int *ptr3)
{
	*ptr3=(*ptr1)+(*ptr2);
}
void sub(int *ptr1,int *ptr2,int *ptr3)
{
	*ptr3=(*ptr1)-(*ptr2);
}
void mul(int *ptr1,int *ptr2,int *ptr3)
{
	*ptr3=(*ptr1)*(*ptr2);
}
void div(int *ptr1,int *ptr2,int *ptr3)
{
	if((*ptr2)=='0')
	{
		printf("Invalid Input. \n");
	}
	else
	{
		*ptr3=(*ptr1)/(*ptr2);
	}
}
void mdiv(int *ptr1,int *ptr2,int *ptr3)
{
	if((*ptr2)=='0')
	{
		printf("Invalid Input. \n");
	}
	else
	{
		*ptr3=(*ptr1)%(*ptr2);
	}
}
