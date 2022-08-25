//program to sort elements in an array in ascending order.
#include<stdio.h>

int main()
{
	int a[50],size,i,j,temp;
	
	printf("Enter the size of an array : ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter %d element : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nThe elements of an array in ascending order is \n");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
