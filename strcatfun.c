#include<stdio.h>
void main()
{
	char str1[50],str2[10];
	//int i,j,count=0;
	printf("Enter First String STR1: \n");
	gets(str1);
	printf("Enter Second String STR2: \n");
	gets(str2);
	strcatfun(str1,str2);
}
void strcatfun(char str1[],char str2[])
{
	int i,j,count=0;
	for(i=0;str1[i]!='\0';i++)
	{
		count++;
	}
	str1[i]=' ';
	//printf("The Length of First String STR1: %d \n",count);
	for(j=0;str2[j]!='\0';j++)
	{
		str1[count+1]=str2[j];
		count++;
	}
	printf("The STRCAT operation using function STR1: %s \n",str1);
}
