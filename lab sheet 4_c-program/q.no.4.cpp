//program to get the largest element of an array using the function
#include<stdio.h>
int largest_element(int arr[],int); //function delcaration
int main()
{
	int arr[50],size,i,m;
	printf("Enter the size of an array :");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter %d element : ",i);
		scanf("%d",&arr[i]);
	}
	//printing the largest element by using function call
	printf("\nLargest element in an array is %d",largest_element(arr,size));
	return 0;
}
int largest_element(int arr[],int n) //function definition
{
	int i;
	int large=arr[0];
	//using for-loop for finding the largest element
	for(i=0;i<n;i++)
	{
		if(arr[i]>large)
		{
			large=arr[i];	
		}
			
	}
	return large;
	
}
