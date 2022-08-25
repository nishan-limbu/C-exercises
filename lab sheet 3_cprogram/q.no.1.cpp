//program to find sum of all elements of the array
#include<stdio.h>

int main()
{
	int array[50],i,size,sum=0;
	//assigning the size and element from user
	printf("Enter the size of an array : ");
	scanf("%d",&size);
	printf("Enter the elements in an array :\n");
	for(i=0;i<size;i++)
	{
		printf("Enter %d element : ",i);
		scanf("%d",&array[i]);
	}
	//using the for-loop
	for(i=0;i<size;i++)
	{
		sum+=array[i];
	}
	//printing the sum
	printf("sum = %d",sum);
	return 0;
}
