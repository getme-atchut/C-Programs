#include<stdio.h>
void main()
{
	int i,c,arr[10],result;
	for(i=0;i<10;i++)
	{
		printf("Enter your values to insert:");
		scanf("%d",&c);
		arr[i]=c;
		//printf("%d=%d \n",arr[i],c);
	}
	for(i=0;i<10;i++)
	{
		result=arr[i]%2;
		if(result==1)
		{
			printf("The input of given array:arr[%d] is ODD \n",i);
		}
		else
		{
			printf("The input of given array:arr[%d] is EVEN \n",i);
		}
		printf("The Array values:arr[%d]=%d\n",i,arr[i]);
	}
}
