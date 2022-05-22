#include<stdio.h>
#include<string.h>
void main()
{
	struct student
	{
	char name[20];
	int rollno;
	int submarks[4];
	};
	
	int i,j;
	struct student stu[3];
	for(i=0;i<3;i++)
	{
		printf("Enter data for student %d\n",i+1);
		printf("Enter Name:\n");
		while((getchar())!='\n');
		gets(stu[i].name);
		printf("Enter Roll Number:\n");
		scanf("%d",&stu[i].rollno);
		for(j=0;j<4;j++)
		{
			printf("Enter Submarks %d: \n",j+1);
			scanf("%d",&stu[i].submarks[j]);
		}
	}
	for(i=0;i<3;i++)
	{
		//printf("Hello");
		printf("Data of Student %d\n",i+1);
		printf("Name:\t%s\nRoll Number:\t%d\n",stu[i].name,stu[i].rollno);
		for(j=0;j<4;j++)
		{
			printf("Marks:\t%d\n",stu[i].submarks[j]);
		}
		printf("\n\n");
	}
}

