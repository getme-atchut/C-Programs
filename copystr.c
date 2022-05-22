#include<stdio.h>
#include<string.h>
void main()
{
	int i;
	char str1[20],str2[50];
	printf("Enter any String in STR1: \n");
	gets(str1);
	for(i=0;i<str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	printf("The string in STR2: %s\n",str2);
}
