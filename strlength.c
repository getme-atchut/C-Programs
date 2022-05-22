#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int i,count=0;
	printf("Enter your string: \n");
	gets(str);
	for(i=0;i<str[i]!='\0';i++)
	{
		count++;
	}
	printf("The length of your string is: %d \n",count);
}
