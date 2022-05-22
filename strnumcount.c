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
		if(str[i]=='0' || str[i]=='1' || str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' || str[i]=='6' || str[i]=='7'|| str[i]=='8' || str[i]=='9')
		{
			count++;
		}
	}
	printf("Total numbers in given string: %d \n",count);
}
