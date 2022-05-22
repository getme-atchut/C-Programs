#include<stdio.h>
void main()
{
	int i,c,arr[10];
	for(i=0;i<10;i++)
	{
		printf("Enter your values to insert:");
		scanf("%d",&c);
		arr[i]=c;
		//printf("%d=%d \n",arr[i],c);
	}
	for(i=0;i<10;i++)
	{
		printf("The Array values:arr[%d]=%d\n",i,arr[i]);
	}	
}
