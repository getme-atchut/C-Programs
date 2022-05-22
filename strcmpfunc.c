#include<stdio.h>
//#include<string.h>
int strcmp(char x[], char y[]);
void main()
{
	char str1[30],str2[20];
	int i;
	printf("enter first string STR1:\n");
	gets(str1);
	printf("enter second string STR2: \n");
	gets(str2);
	i=strcmp(str1,str2);
	if(i==0)
	{
		printf("Both Strings are same \n");
	}
	else
	{
		printf("Both are not same \n");
	}
}
int strcmp(char st1[],char st2[])
{
	int a;
	for(a=0;st1[a]==st2[a];a++)
	{
		if(st1[a]!='\0')
		{
			return 0;
		}
	}
	return (st1[a]-st2[a]);
}
