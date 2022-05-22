#include<stdio.h>
const int idly=20,dosa=25,tea=10,vada=30;
int bill,totalbill;
void main()
{
	//const int idly=20,dosa=25,tea=10,vada=30;
	int selected,qty,c=1;
	while(c==1)
	{
	printf("Select your Item:\n1.Idly\n2.Dosa\n3.Tea\n4.Vada\n");
	scanf("%d",&selected);
	printf("Select Quantity:\n");
	scanf("%d",&qty);
	if(selected==1)
	{
		bill=idly*qty;
		//printf("Your total bill for the order:%d\n",bill);
	}
	else if(selected==2)
	{
		bill=dosa*qty;
		//printf("Your total bill for the order:%d\n",bill);
	} 
	else if(selected==3)
	{
		bill=tea*qty;
		//printf("Your total bill for the order:%d\n",bill);
	}
	else if(selected==4)
	{
		bill=vada*qty;
		//printf("Your total bill for the order:%d\n",bill);
	}
	else
	{
		printf("Invalid Selection");
	}
	totalbill=totalbill+bill;
	printf("Do you want anything else:\n1. Yes\n2. No\n");
	scanf("%d",&c);
	}
	printf("Your Total Bill:%d\n",totalbill);
}
