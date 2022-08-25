//program to print the current date and time.
#include<stdio.h>
#include<time.h>
int main()
{
//	time_t t;
//	time(&t);
//	printf("Current date and time : %s",ctime(&t));
//above will display the day_of_week,month,number_of_day,time,year.
	
	time_t t;
	t=time(NULL);
	struct tm tm;
		tm=*localtime(&t);
	//displaying the current date and time.	
	printf("Current date : %d : %d : %d",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900);
	printf("\nCurrent time : %d : %d : %d",tm.tm_hour,tm.tm_min,tm.tm_sec);
	
	return 0;
}
