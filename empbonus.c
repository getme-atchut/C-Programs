#include<stdio.h>
#include<string.h>
#define n 50
void main()
{
	int doj[3],cdate[3],salary;
	char empname[n],gender[n];
	printf("enter current date (dd/mm/yyyy):\n");
	scanf("%d\t%d\t%d",&cdate[0],&cdate[1],&cdate[2]);
	printf("Enter Employee name: ");
	scanf("%s",&empname);
	printf("\nEnter Gender: ");
	scanf("%s",&gender);
	printf("\nEnter date of joining:\n");
	scanf("%d\t%d\t%d",&doj[0],&doj[1],&doj[2]);
	printf("Enter employee Salary:Rs. ");
	scanf("%d",&salary);
	char male = "male";
	char female = "female";
	//printf("YEAR = %d\n",year);
	if((cdate[2] - doj[2]) > 5 && (cdate[2]-doj[2]) > 4)
	{
		printf("\nThe Employee %s is eligible for 30% hike.\n",empname);
	}
	else if ((cdate[2] -doj [2]) > 5 && (gender == "female"))
	{
		printf("The employee %s is eligible for 20% hike\n",empname);
	}
	else if ((cdate[2] - doj[2]) < 4 &&  (cdate[2] - doj[2] > 0))
	{
		printf("The Employee %s is eligible for 30% hike\n",empname);
	}
	else
	{
		printf("Employee is under training\n");
	}
	
}
