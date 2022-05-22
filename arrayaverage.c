#include<stdio.h>
void main()
{
	int i,n,sum=0;
	float a[5], avg;
	printf("Enter how many values to insert: ");
	scanf("%d", &n);
	printf("Enter Values to an array:\n");
	for(i=0; i<n; i++)
 	{
		printf("Array Values a[%d] = \n",i);
		scanf("%f",&a[i]);
	}
	for(i=0; i<n; i++)
 	{
 		sum = sum + a[i];
 	}
	avg = sum/n;
	printf("The sum of all values in array is: %d \n",sum);
	printf("Average of a given array = %f \n", avg);
}

