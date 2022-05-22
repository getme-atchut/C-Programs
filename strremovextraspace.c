#include<stdio.h>
#include<string.h>
void main()
{
	char str[50],charecter;
	int i,j,length;
	printf("Enter your String: \n");
	gets(str);
	length=strlen(str);
	for(i=0;i<length;i++)
	{
		if(str[i]==' ' && str[i+1]==' ')
		{
			for(j=i;j<length;j++)
			{
				str[j]=str[j+1];
			}
			length--;
			i--;
		}
	}
	printf("The string after removing extra spaces is:%s \n",str);
}
