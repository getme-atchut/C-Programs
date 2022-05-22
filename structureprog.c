#include<stdio.h>
#include<string.h>
void main()
{
	int i,j;
	struct details
	{
		char sname[20],sub[2],marks[2];
		int cls,rollno;
		float percentage;
	}det[2];
	
	struct college
	{
		struct details det[2];
	};
	
	struct college clg;
	struct college *ptr;
	ptr=&clg;
	printf("\n\n******** // STUDENT DETAILS // ********\n\n");
	for(i=0;i<2;i++)
	{
		printf("Enter Student Details of %d: \n",i+1);
		printf("Enter Student Name:\n");
		//while((getchar())!='\n');
		gets(clg.det[i].sname);
		printf("Enter Roll Number:\n");
		scanf("%d",&clg.det[i].rollno);
		//printf("%d\n",clg.det[i].rollno);
		printf("Enter Class:\n");
		scanf("%d",&clg.det[i].cls);
		printf("%d\n",clg.det[i].cls);
		for(j=0;j<2;j++)
		{
			printf("Enter Subject %d:\n",j+1);
			scanf("%s",&clg.det[i].sub[j]);
			printf("Enter subject marks:\n");
			scanf("%d",&clg.det[i].marks[j]);
		}
		while((getchar())!='\n');
	}
	printf("\n\n");
	for(i=0;i<2;i++)
	{
		printf("The Details of Student %d:\n",i+1);
		printf("Name:%s\n",clg.det[i].sname);
		printf("Roll Number:%d\n",clg.det[i].rollno);
		printf("Class:%d\n",ptr->det[i].cls);
		//printf("Name:\t%s\nRoll Number:\t%d\nClass:\t%d\n",clg.det[i].sname,clg.det[i].rollno,clg.det[i].class);
		for(j=0;j<2;j++)
		{
			printf("subjects:%s\n",clg.det[i].sub[j]);
			printf("Marks:%d\n",clg.det[i].marks[j]);
		}
		printf("\n\n");
	}
}
