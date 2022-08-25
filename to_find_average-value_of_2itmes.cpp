#include<stdio.h>

int main()
{
	float average_value;
	int weight_of_items1=15,No_of_items1=5,weight_of_items2=25,No_of_items2=4,total_items;
	
	total_items=No_of_items1+No_of_items2;
	average_value = (weight_of_items1*No_of_items1 +weight_of_items2*No_of_items2)/total_items;
	printf("Average value = %0.3f",average_value);
	
	return 0;
	
}
