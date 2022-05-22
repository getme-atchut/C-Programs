#include<stdio.h>
#include<math.h>
void main()    
{    
	int i,a,count=0,number,r,sum=0,temp;    
	printf("Enter any number to check:\n");    
	scanf("%d",&number);    
	temp=number;
	a=number;    
	while(number>0)
	{
 	 number=number/10;
	 count++;
	}
	for(i=0;i<temp;)
	{    
		r=temp%10;    
		sum=sum+pow(r,count);
		temp=temp/10;    
	}
	if(a==sum)
	{    
		printf("Armstrong  Number.\n");
	}    
	else
	{    
		printf("NOT armstrong number.\n");      
	}
}
