#include<stdio.h>
#include<string.h>
void main()
{
	int i;
	char str1[5];
	char str2[]="Radha Shyam";
	char str3[]="Gopal Kishan";
	for(i=0;i<5;i++)
	{
		printf("Enter String: \n");
		scanf("%s",str1[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%c\n",str1[i]);
	}
}
