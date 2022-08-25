/*program to store name, salary and hours of work per day of 10 employees and
program to increase salary depending on number of hours of work per day and 
print name of employees along with their final salaries.*/
#include<stdio.h>
struct employees
{
	char name[20];
	int salary;
	int hours;
};

int main()
{
	struct employees e[10];
	int i;
	printf("Enter Employees details :\n");
	for(i=0;i<10;i++)
	{
		printf("\nCustomer - %d :\n",i);
		printf("Enter Name : ");
		scanf("%s",&e[i].name);
		printf("Enter Salary : ");
		scanf("%d",&e[i].salary);
		printf("Enter Hours of work per day : ");
		scanf("%d",&e[i].hours);
		printf("................................");
		printf("\n");
	}
	printf("\nEmployees whose Salary is increased:");
	for(i=0;i<10;i++)
	{
	
		if(e[i].hours>=8 && e[i].hours<10)
		{
			printf("\nCustoer - %d :",i);
			printf("\nName : %s",e[i].name);
			printf("\nTotal Salary : %d",e[i].salary+50);
			printf("\n...................................................................\n");
			printf("\n");
			
		}
		 if(e[i].hours>=10 && e[i].hours<12)
		{
			printf("\nCustoer - %d :",i);
			printf("\nName : %s",e[i].name);
			printf("\nTotal Salary : %d",e[i].salary+100);
			printf("\n...................................................................\n");
			printf("\n");
			
		}
		 if(e[i].hours>=12)
		{
			printf("\nCustoer - %d :",i);
			printf("\nName : %s",e[i].name);
			printf("\nTotal Salary : %d",e[i].salary+150);
			printf("\n...................................................................\n");
			printf("\n");
			
		}	
	}
	
		
	return 0;
}
