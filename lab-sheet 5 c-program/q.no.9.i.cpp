/*program to store name,account number and balance of customers(more than 10)
and (i)print the customer name whose bank balance is less than $200 .*/
#include<stdio.h>
struct bank
{
	char name[20];
	int acc_number;
	int balance;
};
int main()
{
	struct bank b[12];
	int i;
	printf("Enter the details of the Customers:\n");
	for(i=0;i<12;i++)
	{
		printf("CustoMer - %d :\n",i);
		printf("Name : ");
		scanf("%s",&b[i].name);
		printf("Account number : ");	
		scanf("%d",&b[i].acc_number);
		printf("Bank Balance : ");	
		scanf("%d",&b[i].balance);
		printf("..............................\n");
	}	
	printf("\nCustomer names whose Bank Balance is less than $200.\n");
	for(i=0;i<12;i++)
	{
		if(b[i].balance<200)
		{
			printf("\nCustoer - %d :",i);
			printf("\nName : %s",b[i].name);
			printf("\n..............................\n");
			printf("\n");
		}
	}
	return 0;
}

