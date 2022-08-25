//program for a 2D array of size 3x3 and print the matrix.
#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	
	printf("Enter the element of A matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMatrix A = \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d   ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
