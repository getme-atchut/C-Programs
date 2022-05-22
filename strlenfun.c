#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	//int i,count=0;
	printf("Enter your string: \n");
	gets(str);
	strlenfun(str);
}
void strlenfun(char str[])
{
	int i,count=0;
	for(i=0;i<str[i]!='\0';i++)
	{
		count++;
	}
	printf("The length of your string is: %d \n",count);
}
