#include<stdio.h>
#include<string.h>
int main()

{
	int i=0,len=0,a,b;
	char str1[50],str2[50];
	printf("Enter your string STR1: \n");
	gets(str1);
	for(i=0;i<str1[i]!='\0';i++)
	{
		len++;
	}
	printf("The length of given string:%d \n",len);
	a=len-1;
	for(b=0;b<len;b++)
	{
		str2[b]=str1[a];
		a--;
	}
	printf("The Reverse of your given string:%s \n",str2);
}
