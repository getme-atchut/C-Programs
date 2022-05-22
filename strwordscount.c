#include<stdio.h>
#include<string.h>
void main()
{
	int i,count=1;
	char str[50],c;
	puts("Enter String:");
	gets(str);
	//printf("Enter letter to check: \n");
	//scanf("%c",&c);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	printf("Number of words %d \n",count);
}
