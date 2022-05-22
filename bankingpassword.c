#include<stdio.h>
#include<string.h>
static unsigned int fund_transfer,deposit,withdraw,balance,acc_number;
int fundstransfers(int x);
int deposits(int x);
int withdrawls(int x);
int a,b=1,c,d,e,f,g;
int main()
{
 char password[10];
 char gopal[10]="gopal";
 char radha[10]="radha";
 int value;
 printf("**Welcome to Gopal Bank Of India** \nPlease enter your Account Number\n");
 scanf("%d",&acc_number);
 if(acc_number==12345)
 {
  printf("Hello Gopal,Please enter your password\n");
  scanf("%s",password);
  value=strcmp(password,gopal);
  if(value==0)
  {
   int i=1;
   while(i<2)
   {
    printf("choose from below\n1-fund_transfer\n2-deposit\n3-balance\n4-withdraw\n");
    scanf("%d",&a);
    switch(a)
    {
     case 1:
     {
      printf("Please enter the amount to be transffered:=\n");
      scanf("%d",&fund_transfer);
      if(fund_transfer<=balance)
      {
       balance=fundstransfers(fund_transfer);
       printf("Your Account  Balance=%d\n",balance);
      }
      else
      {
       printf("Insufficient Funds\n");
      }
      break;
     }
     case 2:
     {
      printf("Enter the amount to deposit\n");
      scanf("%d",&deposit);
      balance=deposits(deposit);
      printf("Your current account balance=%d\n",balance);
      break;
     }
     case 3:
     {
      printf("You have choosed to check your account balance\n");
      printf("Balance=%d\n",balance);
      break;
     }
     case 4:
     {
      printf("Please Enter the amount you want to withdraw=");
      scanf("%d",&withdraw);
      if(withdraw<=balance)
      {
       balance=withdrawls(withdraw);
       printf("Your courrent account balance=%d\n",balance);
      }
      else
      {
       printf("Insufficient Funds\n");
      }
      break;
     }
     default:
     {
      printf("Invalid Choice of selection please try again later\n");
      break;
     }
    }
    printf("Do you want to-->1-Do another transaction   2-exit\n");
    scanf("%d",&i);
   }
  }
  else
  {
   printf("Wrong/Invalid Password-Login Authentication failed\n");
  }
 }
 if(acc_number==123456)
 {
  printf("Hello Radha, please enter your Password\n");
  scanf("%s",password);
  value=strcmp(password,radha);
  if(value==0)
  {
   int i=1;
   while(i<2)
   {
    printf("choose from below\n1-fund_transfer\n2-deposit\n3-balance\n4-withdraw\n");
    scanf("%d",&a);
    switch(a)
    {
     case 1:
     {
      printf("Please Enter the amount tobe transffered=\n");
      scanf("%d",&fund_transfer);
      if(fund_transfer<=balance)
      {
       balance=fundstransfers(fund_transfer);
       printf("your account balance=%d\n",balance);
      }
      else
      {
       printf("Insufficient Funds\n");
      }
      break;
     }
     case 2:
     {
      printf("Please enter the amount to deposit\n");
      scanf("%d",&deposit);
      balance=deposits(deposit);
      printf("Your current account balance=%d\n",balance);
      break;
     }
     case 3:
     {
      printf("You have choosen to check your account balance\n");
      printf("Balance=%d\n",balance);
      break;
     }
     case 4:
     {
      printf("Please eEter the amount you want to withdraw=");
      scanf("%d",&withdraw);
      if(withdraw<=balance)
      {
       balance=withdrawls(withdraw);
       printf("Your courrentaccount balance=%d\n",balance);
      }
      else
      {
       printf("Insufficient Funds\n");
      }
      break;
     }
     default:
     {
      printf("Invalid choice of selection please try again later\n");
      break;
     }
    }
    printf("Do you want to-->1-Do another transaction   2-exit\n");
    scanf("%d",&i);
   }
  }
  else
  {
   printf("Wrong/Invalid Password-Login Authentication failed\n");
  }
 }
 else
 {
  printf("Records not found-Plese try again later\n");
 }
}
int fundstransfers(int x)
{
 balance=balance-x;
 return balance;
}
int deposits(int x)
{
 balance=balance+x;
 return balance;
}
int withdrawls(int x)
{
 balance=balance-x;
 return balance ;
}
