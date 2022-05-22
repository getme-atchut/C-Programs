#include<stdio.h>
void main()
{
	printf("Welcome to GOPAL BANK of INDIA (GBI) \n");
	int accno1=1234,accno2=4567;
	char password1="abcdef",password2="abdcefgh",pass1,pass2,customer[10];
	printf("Please enter your Account Number: \n");
	scanf("%d",&customer);
	if(accno1 == customer)
	{
		printf("Please Enter your Password: \n");
		scanf("%c",&pass1);
		if(password1 == pass1)
		{
			printf("Welcome %d \n1. Balance Check\n2. Funds Transfer\n3. Add Benificiary\n4.Deposit\n5.Withdraw\n6.Quit",accno1);
		}
		else
		{
			printf("Incorrect / Invalid Password \n");
		}
	}
	if(accno2 == customer)
	{
		printf("Please Enter your Password: \n");
		scanf("%d",&pass2);
		if(password2 == pass2)
		{
			printf("Welcome %d \n1. Balance Check\n2.Funds Transfer\n3. Add Benificiary\n4.Deposit\n5.Withdraw\n6.Quit",accno2);
		}
		else
		{
			printf("Incorrect / Invalid Password \n");
		}
	}
}
