//program to convert the days into years, weeks and days

#include<stdio.h>

int main(void)
{
	int day,week, year, month;
	
	//assigning the input from the user
	printf("Enter the number of days : ");
	scanf("%d",&day);
	
	//calculating the years, weeks and days
	year=day/365;
	week=(day-(year*365))/7;
	day=day-(year*365)-(week*7);
	printf("\nYears = %d",year);
	printf("\nWeeks = %d",week);
	printf("\nDays = %d",day);
	
}
