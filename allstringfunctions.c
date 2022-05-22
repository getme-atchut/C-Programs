#include<stdio.h>
#include<string.h>
void strlenfun(char x[50]);
int strcmpfun(char x[50],char y[50]);
void strcpyfun(char x[50],char y[50]);
void strcatfun(char x[50],char y[50]);
int selection,a,b;
void main()
{
	int i=0;
	char str1[50],str2[50];
	while(i<1)
	{
		printf("String Operations:- Select the Function to Check:\n");
		printf("1. String Length \n");
		printf("2. String Compare \n");
		printf("3. String Copy \n");
		printf("4. String Concatination \n");
		printf("5. Exit \n");
		b=gets(selection);
		printf("Selection: %d \n",b);
		switch(b)
		{
		case 1:	
			{
				printf("Enter first Sting: \n");
				gets(str1);
				strlenfun(str1);
			}break;
		case 2:	
			{
				printf("Enter First String: \n");
				gets(str1);
				printf("Enter Second String: \n");
				gets(str2);
				a=strcmpfun(str1,str2);
				if(a==0)
				{
					printf("Both Strings are same \n");
				}
				else
				{
				printf("Both are not same \n");
				}
			}break;
		case 3:	
			{
				printf("Enter First String: \n");
				gets(str1);
				printf("Enter Second String: \n");
				gets("%s",str2);
				strcpyfun(str1,str2);
			}break;
		case 4: 
			{
				printf("Enter First String: \n");
				gets(str1);
				printf("Enter Second String: \n");
				gets(str2);
				strcatfun(str1,str2);
			}break;
		case 5: 
			{
				i=1;
			}break;
		default:
			{
				printf("You Have Entered not a valid choice. \n");
			}
		}
	}
}
void strlenfun(char x[50])
{
	int i,count=0;
	for(i=0;x[i]!='\0';i++)
	{
		count++;
	}
	printf("The length of your string is: %d \n",count);
}
int strcmpfun(char x[],char y[])
{
	int a;
	for(a=0;x[a]==y[a];a++)
	{
		if(x[a]!='\0')
		{
			return 0;
		}
	}
	return (x[a]-y[a]);
}
void strcpyfun(char x[], char y[])
{
	int i;
	for (i=0; x[i]!='\0'; ++i) 
	{
        	x[i] = y[i];
    	}
    	x[i] = '\0';
    	printf("String Replaced in STR1: %s \n", x);
}
void strcatfun(char x[],char y[])
{
	int j,k,counter=0;
	for(j=0;x[j]!='\0';j++)
	{
		counter++;
	}
	x[j]=' ';
	for(k=0;y[k]!='\0';k++)
	{
		x[counter+1]=y[k];
		counter++;
	}
	printf("The STRCAT operation using function STR1: %s \n",x);
}
