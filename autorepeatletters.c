#include <stdio.h>
#include <string.h>
void main()
{
  	char str[80];
  	int i, j, k;
  	printf("Enter any String:\n");
  	gets(str);
  	for(i=0; i<strlen(str); i++)
  	{
  		for(j=i+1; str[j]!='\0'; j++)
  		{
  			if(str[j] == str[i])  
			{
  				for(k=j; str[k]!='\0'; k++)
				{
					str[k] = str[k+1];
				}
 			}
		}
	}
	printf("Given String after removing repeated letters:\n%s\n", str);
}
