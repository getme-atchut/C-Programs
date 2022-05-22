#include<stdio.h>
void main()
{
	int arr[100],i,j=0,n,sum=0,count=0;
	double avg;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter Values to an array:\n");
	for(i=0; i<n; i++)
 	{
		printf("Array Values arr[%d] = \n",i);
		scanf("%d",&arr[i]);
		if(i%2==0)
		{
            		sum+=arr[i];
            		count++;
        	}
	}
    	avg=(double)(sum/count);
	printf("The Sum of Values in array at even positions is = %d \n",sum);
    	printf("Average of Numbers in array at even position is = %lf \n",avg);
}
