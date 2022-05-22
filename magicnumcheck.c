#include <stdio.h>
#include <stdlib.h>
void main()
{
    	int i,number, temp, rev=0, digit, sumOfDigits=0;
    	printf("Enter a Number \n");
    	scanf("%d",&number);
    	temp = number;
 	while(temp > 0)
	{
        	sumOfDigits += temp % 10;  
        	temp = temp / 10;      
    	}
	temp = sumOfDigits;
    	while( temp > 0)
	{
        	rev=rev*10 + temp%10; 
        	temp= temp/10;
    	}
    	if(rev*sumOfDigits == number)
	{
        	printf("Magic Number \n");
	}
    	else
	{
        	printf("Not a Magic Number \n");
	}
}
