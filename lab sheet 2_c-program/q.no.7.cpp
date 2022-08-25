//program to read 10 numbers from keyboard and find their sum and average
#include<stdio.h>
int main(void)
{
	int n=10,i,sum=0;
	float average;
	
	//assigning the input from the keyboard
	printf("The 10 numbers are : ");
	
	for(i=1;i<=10;i++)  //using for loop
	{
		printf(" %d",i);
		sum+=i;
	}
	average=sum/10.0;
	printf("\nSum : %d",sum);
	printf("\nAverage : %.2f",average);
	
	return 0;
}
