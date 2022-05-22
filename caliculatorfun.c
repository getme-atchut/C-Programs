#include<stdio.h>
int z,b,c;
void add();
void sub(int x,int y);
int mul();
int div(int x,int y);
int mdiv();
int main()
{
 int d,i=1;
int a,b,c,x,y,z;
 while(i>0)
 {
  printf("choose the operation\n1-add\n2-sub\n3-mul\n4-div\n5-mdiv\n6-quit\n");
  scanf("%d",&a);
  switch(a)
  {
   case 1:
   {
    printf("give 2 numbers\n");
    scanf("%d%d",&b,&c);
    add();
    break;
   }
   case 2:
   {
    printf("give 2 numbers\n");
    scanf("%d%d",&b,&c);
    sub(b,c);
    break;
   }
   case 3:
   {
    printf("give 2 numbers\n");
    scanf("%d%d",&b,&c);
    mul();
    break;
   }
   case 4:
   {
    printf("give 2 numbers\n");
    scanf("%d%d",&b,&c);
    switch(c)
    {
     case 0:
     {
      printf("invalid input\n");
      break;
     }
     default:
     {
      div(b,c);
      break;
     }
    }
    break;
   }
   case 5:
   {
    printf("give 2 numbers\n");
    scanf("%d%d",&b,&c);
    switch(c)
    {
     case 0:
     {
      printf("invalid input\n");
      break;
     }
     default:
     {
      mdiv();
      break;
     }
    }
    break;
   }
   case 6:
   {
    i=0;
    break;
   }
   default:
   {
    printf("invalid selection\n");
    break;
   }
  }
 }
}
void add()
{
int b,c;

 z=b+c;
 printf("addition = %d\n",z);
}
void sub(int x,int y)
{
 z=x-y;
 printf("subtraction = %d\n",z);
}
int mul()
{
 z=b*c;
 printf("multiplication = %d\n",z);
 return z;
}
int div(int x,int y)
{
 z=x/y;
 printf("division = %d\n",z);
 return z;
}
int mdiv()
{
 z=b%c;
 printf("mdivision = %d\n",z);
 return 0
;
}
