#include<stdio.h>
void main()
{
	int a,d,e,f,count=0,i,b,c,arr[3];
	for(i=0;i<3;i++)
	{
		printf("Enter your values to insert:");
		scanf("%d",&c);
		arr[i]=c;
	}
	for(i=0;i<3;i++)
	{
		//printf("The Array values:arr[%d]=%d\n",i,arr[i]);
		f=arr[i];
		for(b=1;b<=f;b++)
		{
			d=f%b;
			if(d==0)
			{
				count=count+1;
			}
		}
		if(count==2)
		{
			printf("The Given Value %d is PRIME NUMBER \n",arr[i]);	
		}
		else
		{
			printf("The Given Value %d is NOT a PRIME NUMBER \n",arr[i]);		
		}
		count=0;
	}	
}
