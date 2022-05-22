#include <stdio.h>
int i;
int main() 
{
	char str1[100], str2[100], i;
	printf("Enter string STR1: \n");
	gets(str1);
	printf("Enter string STR2: \n");
	gets(str2);
	stringcopy(str1,str2);
}
void stringcopy(char str1[],char str2[])
{
    	printf("%s \n%s \n",str1,str2);
	for (i=0; str1[i]!='\0'; ++i) 
	{
        	str1[i] = str2[i];
    	}
    	str1[i] = '\0';
    	printf("String Replaced in STR1: %s \n", str1);
	printf("String 2: \n");
}
