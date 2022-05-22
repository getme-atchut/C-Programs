#include<stdio.h>
int main()
{
	int range1,range2,i;
	printf("Enter minimum range: \n");
	scanf("%d",&range1);
    	printf("Enter maximum range:\n");
    	scanf("%d",&range2);
    	printf("Magic numbers between %d and %d are: \n",range1,range2);
    	for(i=range1;i<=range2;i++)
    	{
    		int num3=i;
    		int num1=i;
    		int sum=0,rem;
    		while(num1!=0)
    		{
        		rem=num1%10;
        		sum+=rem;
        		num1/=10;
    		}
		int rev=0,num2=sum,rem2;
		while(num2!=0)
    		{
        		rem2=num2%10;
        		rev=rev*10+rem2;
        		num2/=10;
    		}
   		if(sum*rev==num3)
		{
    			printf("%d\n",i);
		}
	}
}
