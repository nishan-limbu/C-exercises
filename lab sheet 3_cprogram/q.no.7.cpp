//program to delete an element at desired position from an array
#include<stdio.h>
int main()
{
	int a[50],size,i,position;
	
	printf("Enter the size of an array : ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter %d element : ",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the position for deleting the element : ");
	scanf("%d",&position);
	if(position>=size+1)
	{
		printf("\nDeleting the element in that position is not possible.");
	}
	else
	{
		for(i=position-1;i<size-1;i++)
		{
			a[i]=a[i+1];
		}
		printf("\nAfter deleting,the resultant elements in an array is\n");
		for(i=0;i<size-1;i++)
		{
			printf("%d ",a[i]);	
		}
	}
	
	return 0;
}
