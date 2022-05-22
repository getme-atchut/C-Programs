#include<stdio.h>
void main()
{
	int a,b,i;
	//int arr[a];
	printf("Enter Size of an Array: \n");
	scanf("%d",&a);
	int (*ptr2)[a],arr[a];
	printf("Enter values to an array: \n");
	for(i=0;i<a;i++)
	{
		scanf("%d",&b);
		arr[i]=b;
	}
	ptr2=arr;
	printf("The base address of pointer: %d\n",ptr2);
	printf("The next jump address of pointer: %d \n",++ptr2);
}
