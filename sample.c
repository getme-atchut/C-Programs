#include<stdio.h>
#include<string.h>
int main()
{
	int a[5],i;
	char b[10];
	short int c[10]={1,2,3,4,5,6,7,8,9,0};
	for(i=0;i<5;i++)
	{
		printf("Address of Array with index a[%d]: %d \n",i,&a[i]);
	}
	printf("\n\n");
	for(i=0;i<10;i++)
	{
		printf("Address of Array with index b[%d]: %d \n",i,&b[i]);
	}
	printf("\n\n");
	for(i=0;i<10;i++)
	{
		printf("Address of Array with index c[%d]: %d \n",i,&c[i]);
	}
}
