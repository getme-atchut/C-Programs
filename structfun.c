#include<stdio.h>
//int data(int x);
struct college
{
	int roll;
	int maths;
	int english;
	float percentage;
};
void main()
{
	struct college ram;
	struct college gopal;
	struct college radha;
	ram.roll=2;
	ram.maths=80;
	ram.english=90;
	ram.percentage=85.952;
	gopal.roll=3;
	gopal.maths=85;
	gopal.english=95;
	gopal.percentage=90.00;
	radha.roll=1;
	radha.maths=87;
	radha.english=93;
	radha.percentage=90.00;
	data(ram);
	data(gopal);
	data(radha);
}
void data(struct college x)
{
	printf("Roll Number:%d \n", x.roll);
	printf("Maths:%d \n",x.maths);
	printf("English:%d \n",x.english);
	printf("Percentage:%2lf \n",x.percentage);
	//return x;
}

