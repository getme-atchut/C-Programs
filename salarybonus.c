#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
 	char radha[15]=("radha kishan"),gopal[15]=("gopal krishna"),achyuth[15]=("achyuth ram"),parimala[15]=("parimala"),employee[15],gender[10],gender1[10]=("female"),gender2[10]=("male");
 	int a,b,c,d,e,f,age,exp,salary,bonus=0,final_bonus=0,final_salary=0;
 printf("Welcome to Gopal Auto-mobiles pvt. ltd.\nAs our Company celebrating it's 10th Anivarsary we are giving our employees some extra bonus based on some factors\nSo,Please Enter the name of employee:");
 
	gets(employee);
 	a=strcmp(employee,radha);
 	b=strcmp(employee,gopal);
 	c=strcmp(employee,achyuth);
 	d=strcmp(employee,parimala);
 	if(a==0)
 	{
  		printf("Hi Mr.Radha Kishan\nPlease enter the below details for bonus criteria check\n");
  		printf("Please select your gender male/female:");
  		gets(gender);
  		e=strcmp(gender,gender1);
  		f=strcmp(gender,gender2);
  		if(e==0)
  		{
   			bonus+=5;
  		}
  		else if(f==0)
  		{
   			bonus+=3;
  		}
  		else
  		{
   			printf("input error\n");
   			exit(0);
  		}
  		printf("Your current manthly salary is:");
  		scanf("%d",&salary);
  		if(salary<10000||salary>1000000)
  		{
   			printf("input error\n");
   			exit(0);
  		}
  		printf("Please enter you experiance in our company in Years:");
  		scanf("%d",&exp);
  		if(exp>0&&exp<=7)
  		{
   			bonus+=3;
  		}
  		else if(exp>7&&exp<=10)
  		{
   			bonus+=7;
  		}
  		else
  		{
  			printf("input error\n");
   			exit(0);
  		}
  		printf("Please enter your age in Years:");
  		scanf("%d",&age);
  		if(age>=18&&age<=35)
  		{
   			bonus+=5;
  		}
  		else if(age>35&&age<=80)
  		{
   			bonus+=8;
  		}
  		else
  		{
  	 		printf("input error\n");
   			exit(0);
  		}
  		printf("congrats your total bonus=%d%\n",bonus);
  		final_bonus=(bonus*salary)/100;
  		final_salary=final_bonus+salary;
  		printf("Congrats From Now on your salary is:%d\n",final_salary);
 	}
 	if(b==0)
 	{
  		printf("Hi mr.Gopal Krishna\nPlease enter the below details for bonus criteria check\n");
  		printf("Please select your gender male/female:");
  		gets(gender);
  		e=strcmp(gender,gender1);
  		f=strcmp(gender,gender2);
  		if(e==0)
  		{
   			bonus+=5;
  		}
  		else if(f==0)
  		{
   			bonus+=3;
  		}
  		else
  		{
   			printf("input error\n");
   			exit(0);
  		}
  		printf("Your current manthly salary is:");
  		scanf("%d",&salary);
  		if(salary<10000||salary>1000000)
  		{
   			printf("input error");
   			exit(0);
  		}
  		printf("Please enter you experiance in our company in Years:");
  		scanf("%d",&exp);
  		if(exp>0&&exp<=7)
  		{
   			bonus+=3;
  		}
  		else if(exp>7&&exp<=10)
  		{
   			bonus+=7;
  		}
  		else
  		{
   			printf("input error\n");
   			exit(0);
  		}
  		printf("Please enter your age in Years:");
  		scanf("%d",&age);
  		if(age>=18&&age<=35)
  		{
   			bonus+=5;
  		}
  		else if(age>35&&age<=80)
  		{
   			bonus+=8;
  		}
  		else
  		{
   			printf("input error");
   			exit(0);
  		}
  		printf("congrats your total bonus=%d%\n",bonus);
  		final_bonus=(bonus*salary)/100;
  		final_salary=final_bonus+salary;
  		printf("Congrats From Now on your salary is:%d\n",final_salary);
 	}
 	if(c==0)
 	{
 		printf("Hi mr.Achyuth Ram\nPlease enter the below details for bonus criteria check\n");
  		printf("Please select your gender male/female:");
  		gets(gender);
  		e=strcmp(gender,gender1);
  		f=strcmp(gender,gender2);
  		if(e==0)
  		{
   			bonus+=5;
  		}
  		else if(f==0)
  		{
   			bonus+=3;
  		}
  		else
  		{
   			printf("input error\n");
   			exit(0);
  		}
  		printf("Your current manthly salary is:");
  		scanf("%d",&salary);
  		if(salary<10000||salary>1000000)
  		{
  			printf("input error\n");
   			exit(0);
  		}
  		printf("Please enter you experiance in our company in Years:");
  		scanf("%d",&exp);
  		if(exp>0&&exp<=7)
  		{
   			bonus+=3;
  		}
  		else if(exp>7&&exp<=10)
  		{
   			bonus+=7;
  		}
  		else
  		{
   			printf("input error\n");
   			exit(0);
  		}
  		printf("Please enter your age in Years:");
  		scanf("%d",&age);
  		if(age>=18&&age<=35)
  		{
  			bonus+=5;
  		}
  		else if(age>35&&age<=80)
  		{
  			bonus+=8;
  		}
  		else
  		{
   			printf("input error");
   			exit(0);
  		}
  		printf("congrats your total bonus=%d%\n",bonus);
  		final_bonus=(bonus*salary)/100;
  		final_salary=final_bonus+salary;
  		printf("Congrats From Now on your salary is:%d\n",final_salary);
 	}
 	if(d==0)
 	{
  		printf("Hi Mrs.Parimala\nPlease enter the below details for bonus criteria check\n");
  		printf("Please select your gender male/female:");
  		gets(gender);
  		e=strcmp(gender,gender1);
  		f=strcmp(gender,gender2);
  		if(e==0)
  		{
  			bonus+=5;
  		}
  		else if(f==0)
  		{
   			bonus+=3;
  		}
  		else
  		{
   			printf("input error\n");
   			exit(0);
  		}
  		printf("Your current manthly salary is:");
  		scanf("%d",&salary);
  		if(salary<10000||salary>1000000)
  		{
   			printf("input error\n");
   			exit(0);
  		}
  		printf("Please enter you experiance in our company in Years:");
  		scanf("%d",&exp);
  		if(exp>0&&exp<=7)
  		{
   			bonus+=3;
  		}
  		else if(exp>7&&exp<=10)
  		{
   			bonus+=7;
  		}
  		else
  		{
   			printf("input error\n");
   			exit(0);
  		}
  		printf("Please enter your age in Years:");
  		scanf("%d",&age);
  		if(age>=18&&age<=35)
  		{
   			bonus+=5;
  		}
  		else if(age>35&&age<=80)
  		{
   			bonus+=8;
  		}
  		else
  		{
  			printf("input error");
   			exit(0);
  		}
  		printf("congrats your total bonus=%d%\n",bonus);
  		final_bonus=(bonus*salary)/100;
  		final_salary=final_bonus+salary;
  		printf("Congrats From Now on your salary is:%d\n",final_salary);
 	}
}
