//program to display the total number of hours and minutes
#include<stdio.h>

int main(void)
{
	int m,h; //m=minute
	//input the minutes from the users
	printf("Enter the minutes : ");
	scanf("%d",&m);
	
	//calculating total hours and minutes
	h=m/60;
	m=m%60;
	printf("\nHours = %d \nMinutes = %d",h,m);
	
}
