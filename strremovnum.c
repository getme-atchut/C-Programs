#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	printf("Enter your String: \n");
	gets(str);
	int i,j;
	for(i=0;str[i]!='\0';++i)
	{
		while(str[i]>='0' && str[i]<='9')
		{
			for(j=i;str[j]!='\0';++j)
			{
				str[j]=str[j+1];
			}
		str[j]='\0';
		}
	}
	printf("The Given string after removing Numbers:%s \n",str);
}
