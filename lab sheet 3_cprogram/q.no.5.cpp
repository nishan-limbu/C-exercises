//program to find the maximum and minimum element in an array.
#include<stdio.h>

int main()
{
	int a[50],size,i,max,min;
	
	printf("Enter the size of the array : ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter %d element : ",i);
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	min=a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\nMinimum element in an array is %d.",min);
	printf("\nMaximum element in an array is %d.",max);
	
	return 0;
}
