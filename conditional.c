#include<stdio.h>
void main()
{
	int a,b,c,result;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	result=((a>=b) && (a>=c))?(a==b || a==c)?printf("value of a is bigger"):((b>c) && (b>a))?printf("value of b is bigger"):printf("value of c is bigger");
}
