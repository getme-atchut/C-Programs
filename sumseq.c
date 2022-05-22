#include<stdio.h>
void main()
{
	int n,v1=0,v2=1,v3;
	printf("Enter your range:\n");
	scanf("%d",&n);
	printf("%d \n",v1);
	printf("%d \n",v2);
	v3=v1+v2;
	while(v3<=n)
	{
		printf("%d \n",v3);
		v1=v2;
		v2=v3;
		v3=v1+v2;
	}
}
