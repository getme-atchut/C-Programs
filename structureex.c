#include<stdio.h>
#include<string.h>
void main()
{
	// ***** Structure Declaration ***** //
	
	struct student
	{
		char name[50];
		int rollnumber;
		float marks;
		int class;
	};
	
	// ***** Structure Objects Creation *****//
	
	struct student gopal;
	struct student radha;
	struct student atchut;

	printf("Enter Student Name:");
	gets(gopal.name);
	printf("\nEnter Roll Number:");
	scanf("%d",&gopal.rollnumber);
	printf("\nEnter Marks:");
	scanf("%f",&gopal.marks);
	printf("\nEnter Class:");
	scanf("%d",&gopal.class);
	

	printf("\nEnter Student Name:");
	gets(radha.name);
	printf("\nEnter Roll Number:");
	scanf("%d",&radha.rollnumber);
	printf("\nEnter Marks:");
	scanf("%f",&radha.marks);
	printf("\nEnter Class:");
	scanf("%d",&radha.class);


	printf("\nEnter Student Name:");
	scanf("%s",&atchut.name);
	printf("\nEnter Roll Number:");
	scanf("%d",&atchut.rollnumber);
	printf("\nEnter Marks:");
	scanf("%f",&atchut.marks);
	printf("\nEnter Class:");
	scanf("%d",&atchut.class);


	printf("\n********* FISRT STUDENT DETAILS *********");
	printf("\n\n");	
	printf("Student Name:\t%s\n",gopal.name);
	printf("Roll Number:\t%d\n",gopal.rollnumber);
	printf("Marks:\t\t%f\n",gopal.marks);
	printf("Class:\t\t%d\n",gopal.class);
	printf("\n\n");

	printf("********* SECOND STUDENT DETAILS *********\n");
	printf("\n");	
	printf("Student Name:\t%s\n",radha.name);
	printf("Roll Number:\t%d\n",radha.rollnumber);
	printf("Marks:\t\t%f\n",radha.marks);
	printf("Class:\t\t%d\n",radha.class);
	printf("\n\n");

	printf("********* THIRD STUDENT DETAILS *********\n");
	printf("\n");	
	printf("Student Name:\t%s\n",atchut.name);
	printf("Roll Number:\t%d\n",atchut.rollnumber);
	printf("Marks:\t\t%f\n",atchut.marks);
	printf("Class:\t\t%d\n",atchut.class);
	printf("\n");
}
