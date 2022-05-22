#include<stdio.h>
#include<string.h>
void main()
{
	char str1[50],str2[25];
	int i,j,count=0;
	printf("Enter First String STR1;\n");
	gets(str1);
	printf("Enter Second String STR2: \n");
	gets(str2);
	for(i=0;str1[i]==str2[i];i++)
	{
		if(str1[i]=='0')
		{
			printf("Both are same");
		}
	}
}
