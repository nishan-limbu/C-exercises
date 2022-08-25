//program to accept two matrices and check whether they are equal
#include<stdio.h>

int matrix_equal(int a[3][3],int b[3][3])
{
	int i,j,f=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]!=b[i][j])
			{
				f=1;
				break;
			}
		}
	}
	if(f==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a[3][3],b[3][3];
	int i,j;
	
	printf("Enter the element of matrix A:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Element in a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the element of matrix B:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Element in b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nMatrix A :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}	
	printf("\nMatrix B :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",b[i][j]);
		}
		printf("\n");
	}
	
	if(matrix_equal(a,b)==1)
	{
		printf("\nMatrix A and Matrix B are equal.");
	}
	else
	{
		printf("\nMatrix A and Matrix B are not equal.");
	}
	return 0;
}
