#include <stdio.h> 
void main()
{
	int i,j;
    	int temp,count; 
    	printf("Enter any number: \n");
    	scanf("%d",&i);
	printf("Enter second number: \n");
	scanf("%d",&j);
    	temp=i;
    	count=0;
    	while(temp!=1)
    	{
        	if(temp%j!=0)
		{
            		count=1;
            		break;
        	}
        	temp=temp/2;
    	}
    	if(count==0)
	{
        	printf("%d is a number that is the power of %d. \n",i,j);
    	}
	else
	{
        	printf("%d is not the power of %d. \n",i,j);
	}
}
