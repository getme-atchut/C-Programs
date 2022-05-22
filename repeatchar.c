#include<stdio.h>
#include<string.h>
void main()
{
	int i,count=0;
	char str[50],c;
	puts("Enter String:");
	gets(str);
	printf("Enter letter to check: \n");
	scanf("%c",&c);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==c)
		{
			count++;
		}
	}
	printf("The letter repeats %d times \n",count);
}
