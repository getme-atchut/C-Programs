#include<stdio.h>
#include<string.h>
void main()
{
	int i,count=0;
	char str[50],c;
	puts("Enter String:");
	gets(str);
	//printf("Enter letter to check: \n");
	//scanf("%c",&c);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		{
			count++;
		}
	}
	printf("Number of Vowels in given string: %d \n",count);
}
