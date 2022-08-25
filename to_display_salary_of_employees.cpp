#include<stdio.h>

int main()
{
	int Working_hrs= 8,Employee_ID,	Salary,Salary_amount=15000;
	char Employees_ID= 0342;

	Salary=Salary_amount*Working_hrs;
	printf("\nEmployees ID = 0342 \nSalary amount/hr = U$15000", Employees_ID,Salary_amount);
	printf("\nSalary = U$%d", Salary);
	
	return 0;
}
