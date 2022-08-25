//program to read rollno., name and marks in three subjects and claculate the total, percentage and division
#include<stdio.h>

int main(void)
{
	int roll, total, t_a=300,div;  //t_a= total marks in three subjects
	int math, phy, che;
	float per;
	char name[50];
	
	//assigning the inputs from users
	printf("Enter the following : \n    Roll number : ");
	scanf("%d",&roll);
	printf("    Name : ");
	scanf("%s",&name);
	printf("Enter marks of three subjects : \n");
	printf("    Mathematics : ");
	scanf("%d",&math);
	printf("    Physic : ");
	scanf("%d",&phy);
	printf("    Chemistry : ");
	scanf("%d",&che);
	
	//calculating the total, percentage and division
	total=(math+phy+che);
	per=(total*100)/300;
	printf("Your total marks obtained is %d\n",total);
	printf("Your percentage is %.2f",per);
	
	return 0;
}
