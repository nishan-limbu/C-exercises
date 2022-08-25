/*program to compare two dates from the uers and checking if they are equal or not using structure*/
#include<stdio.h>
struct date
{
	int date;
	int month;
	int year;
};
int main()
{
	struct date d[2];
	int i,temp=0;
	printf("Enter the date,month and year:\n");
	for(i=0;i<2;i++)
	{
		printf("For %dst date :\n",i);
		printf("Enter the day : ");
		scanf("%d",&d[i].date);
		printf("Enter the month : ");
		scanf("%d",&d[i].month);
		printf("Enter the year : ");
		scanf("%d",&d[i].year);
		printf("..........................");
		printf("\n");
	}
	//using if statement
	if(d[0].date==d[1].date)
	{
		if(d[0].month==d[1].month)
		{
			if(d[0].year==d[1].year)
			{
				temp=1;
			}
		}
	}
	if(temp==1)
	{
		printf("\nDates are equal.");
	}
	else
	{
		printf("\nDates are not equal.");
	}
	return 0;
}
