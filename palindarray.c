#include<stdio.h>
void main()
{
	int i,a,b,c=0,d,arr[6],temp;
	for(i=0;i<6;i++)
	{
		printf("Enter values to array:\n");
		scanf("%d",&a);
		arr[i]=a;
	}
	for(i=0;i<6;i++)
	{
		printf("The input Values for the given array is:%d \n",arr[i]);		
		temp=arr[i];
		while(temp>0)
		{
			b=temp%10;
			c=(c*10)+b;
			temp=temp/10;
		}
		if(arr[i]==c)
		{
			printf("The Number you entered is a PALINDROME NUMBER. \n");
			//printf("The Reverse Value of the given array value:%d \n",c);
		}
		else
		{
			printf("The Number you entered is NOT a PALINDROME NUMBER. \n");
			//printf("The Reverse Value of the given array value:%d \n",c);
		}
		c=0;
	}
}
