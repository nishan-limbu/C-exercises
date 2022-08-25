//program to find the largest element in an array using the funciton
#include<stdio.h>
#include<stdlib.h>

int secondlargest_element(int array[],int);
int smallest_element(int array[],int);
int main()
{
	int array[100],i,n;
	printf("\nEnter the size of an array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d element : ");
		scanf("%d",&array[i]);
	}
	printf("\nSecond Largest element of an array is %d.",secondlargest_element(array,n));
	printf("\nSmallest element of an array is %d.",smallest_element(array,n));
	return 0;
}

int secondlargest_element(int array[],int n)
{
	int k;
	int large=array[0];
	int second_large=array[0];
	large=second_large=INT_MIN;
	for(k=0;k<n;k++)
	{
		if(array[k]>large)
		{
			large=array[k];
			return large;
		}
		else if(array[k]>large)
		{
			second_large=array[k];	
			return second_large;
		}
	}
	
}

int smallest_element(int array[],int n)
{
	int j;
	int small=array[0];
	for(j=0;j<n;j++)
	{
		if(array[j]<small)
		{
			small=array[j];
		}
	}
	return small;
}
