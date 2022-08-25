/*program to store name,account number and balance of customers(more than 10)
and (ii) add $100 in the balance of custoers having more than $1000
and print the incremented value of their balance.*/
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
		printf("\n..............................");
	}	
	printf("\nCustomer Bank Balance after adding $100 whose balance is more than $1000.\n");
	for(i=0;i<12;i++)
	{
		if(b[i].balance>1000)
		{
			printf("\nCustoer - %d :",i);
			printf("\nBank Balance : %d",b[i].balance+100);
			printf("\n...................................................................\n");
			printf("\n");
		}
	}
	return 0;
}

