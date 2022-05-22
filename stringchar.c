#include<stdio.h>
#include<string.h>
void main()
{
	char str[6],str2[10],i;
	char str1[5]="Hello Radha";
	printf("Enter any String: \n");
	scanf("%s",str);
	printf("Result:%s \n",str);
	printf("Result for STR1:%s \n",str1);
	for(int i=0;i<6;i++)
	{
		printf("%c \n",str);
	}
	printf("Enter String for STR2: \n");
	gets(str2);
	//puts(str2);
}
