#include<stdio.h>
void evenoddfun1();
int evenoddfun2();
void evenoddfun3(int x);
int evenoddfun4(int y);
int a,e,selection;
void main()
{
	printf("Please select your choice:\n1.Without Return / Without Arguement\n2.With Return / Without Arguement\n3.Without Return / With Arguement\n4.With Return / With Arguement\n");
	scanf("%d",&selection);
	switch(selection)
	{
		case 1:
		{
			evenoddfun1();
		}break;
		case 2:
		{
			evenoddfun2();
		}break;
		case 3:
		{
			printf("Enter your input value: \n");
			scanf("%d",&a);
			evenoddfun3(a);
		}break;
		case 4:
		{
			int f;
			printf("Enter your input value: \n");
			scanf("%d",&a);
			f=evenoddfun4(a);
			if(f==1)
			{
				printf("The given input number is ODD:(WR/WA)\n");	
			}
			else
			{
				printf("The given input number is EVEN:(WR/WA)\n");
			}
			
		}break;
		default:
		{
			printf("Invalid Selection\n");
		}
	}
}
void evenoddfun1()
{
	int a;
	printf("Enter your input number: \n");
	scanf("%d",&a);
	a=a%2;
	if(a==1)
	{
		printf("The given input number is ODD:(R/A) \n");
	}
	else
	{
		printf("The given input number is EVEN:(R/A) \n");
	}
}
int evenoddfun2()
{
	int a;
	printf("Enter your input number: \n");
	scanf("%d",&a);
	a=a%2;
	if(a==1)
	{
		printf("The given input number is ODD:(WR/A) \n");
	}
	else
	{
		printf("The given input number is EVEN:(WR/A) \n");
	}
	return 0;
}
void evenoddfun3(int b)
{
	int c;
	c=b%2;
	if(c==1)
	{
		printf("The given input number is ODD:(R/WA) \n");
	}
	else
	{
		printf("The given input number is EVEN:(R/WA) \n");
	}	
}
int evenoddfun4(int d)
{
	e=d%2;
	return e;
}
