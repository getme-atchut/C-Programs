#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr=NULL,i,n;
	printf("Enter Size: \n");
	scanf("%d",&n);
      
       // Creating Dynamic Memory using MALLOC
	ptr=(int *)malloc(n*sizeof(int));
	printf("Pointer Malloc Address: %d \n",ptr);
	if(ptr==NULL)
	{
		printf("Malloc Memory Not Allocated \n");
	}
	else
	{
		printf("Enter Malloc Array Values: \n");
		for(i=0;i<n;i++)
		{
			scanf("%d",ptr+i);
		}
		for(i=0;i<n;i++)
		{
			printf("The Malloc Pointer Address Values ptr[%d]: %d\n",i,*(ptr+i));
		}
	}
	free(ptr);   //free pointer
	ptr=NULL;   // pointer assigned to null
	if(ptr==NULL)
	{
		printf("Enter Size: \n");
		scanf("%d",&n);

		//Creating Dynamic Memory using CALLOC
		ptr=(int *)calloc(n,sizeof(int));
		printf("Pointer Calloc Address: %d \n",ptr);
		if(ptr==NULL)
		{
			printf("Calloc Memory Not Allocated \n");
		}
		else
		{
			printf("Enter Calloc Array Values: \n");
			for(i=0;i<n;i++)
			{
				scanf("%d",ptr+i);
			}
			for(i=0;i<n;i++)
			{
				printf("The Calloc Pointer Values ptr[%d]: %d \n",i,*(ptr+i));
			}
		}


		//Realloccating the Size
		printf("Enter New Size: \n");
		scanf("%d",&n);
		ptr=(int *)realloc(ptr,n*sizeof(int));
		printf("Realloc pointer Address & New Size: %d \n",ptr);
		if(ptr==NULL)
		{
			printf("Realloc Memory Not Allocated \n");
		}
		else
		{
			printf("Realloc Pointer Array Values:\n");
			for(i=0;i<n;i++)
			{
				printf("Total Realloc Pointer Values ptr[%d]: %d \n",i,*(ptr+i));
			}
		}
	}
	else
	{
		printf("POINTER NOT NULL \n");
	}
}
