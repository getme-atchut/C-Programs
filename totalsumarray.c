#include<stdio.h>
void main()
{
	int i,b,arr[5],sum=0;
	//printf("Enter the size of array: \n");
	//scanf("%d",&a);
	//printf("size value: %d",a);
	for(i=0;i<5;i++)
	{
		printf("Enter input Values to array:\n");
		scanf("%d",&b);
		arr[i]=b;
	}
	for(i=0;i<5;i++)
	{
		printf("The Array Values:arr[%d]=%d \n",i,arr[i]);
		sum=sum+arr[i];
	}
	printf("The Total Sum of Values in array:%d \n",sum);
}
