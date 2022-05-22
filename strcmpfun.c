#include<stdio.h>
#include<string.h>
void main()
{
	char str1[50],str2[30];
	int i,j,l1,l2,count=0;
	printf("enter first string STR1:\n");
	gets(str1);
	printf("enter second string STR2: \n");
	gets(str2);
	for(i=0;i<str1[i]!='\0';i++)
	{
		l1++;
	}
	for(j=0;j<str2[j];j++)
	{
		l2++;
	}
	for(i=0;i<str1[i]!='\0' || i<str2[i]!='\0';i++)
	{
		str1[i]==str2[i];
		count++;
	}
	if(l1==count && l1==l2)
	{
		printf("Both Strings are same \n");
	}
	else
	{
		printf("Both Strings are not same \n");
	}
}
