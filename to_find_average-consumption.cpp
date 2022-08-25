#include<stdio.h>

int main()
{
	int total_distance=350;
	float fuel_spent=5, average_consumption;
	
	average_consumption=total_distance/fuel_spent;
	printf("Average consumption = %d/%0.3f = %0.3f",total_distance, fuel_spent,average_consumption);
	
	return 0;
}
