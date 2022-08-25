//program to calculate and print the electricity bill of a given customer
#include<stdio.h>
int main()
{
	int cuid,conunit;
	char name[25];
	float charge,total_amt,surcharge=0,net_amt;
	
	//assigning input from the user
	printf("Enter the following : ");
	printf("\nCustomer ID : ");
	scanf("%d",&cuid);
	printf("Name : ");
	scanf("%s",&name);
	printf("Unit consumed : ");
	scanf("%d",&conunit);
	
	//using if...condition
	if(conunit<200)
	{
		charge=1.20;
	}
	else if((conunit>200)&&(conunit<400))
	{
		charge=1.50;
	}
	else if((conunit>400)&&(conunit<600))
	{
		charge=1.80;
	}
	else
	{
		charge=2.00;
	}
	
	//calculating the total amount paid by the customer and the surcharge
	total_amt=conunit*charge;
	if(total_amt>400)
	{
		surcharge=total_amt*15/100.0;
		net_amt=total_amt+surcharge;
	}
	if(net_amt<100)
	{
		net_amt=100.0;
	}
	
	//displaying the output
	printf("\nElectricity Bill");
	printf("\nCustomer ID no. : %d",cuid);
	printf("\nCustomer Name : %s",name);
	printf("\nTotal unit consumed : %d",conunit);
	printf("\nAmount Charge per unit : %.2f",total_amt);
	printf("\nSurcharge Amount : %.2f",surcharge);
	printf("\nNet Amount Paid By the Customer : %.2f",net_amt);
	
	return 0;
	
}
