//program for multiplication of two Matrices.
#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],c[100][100];
	int arow,acolumn,brow,bcolumn,i,j,k;
	int sum=0;
	//assigning the input of A matirx from the user
	printf("Enter the number of rows of matrix A : ");
	scanf("%d",&arow);
	printf("Enter the number of columns of matrix A : ");
	scanf("%d",&acolumn);
	printf("\nEnter the elements of A matrix :\n");
	for(i=0;i<arow;i++)
	{
		for(j=0;j<acolumn;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//assigning the input of B matrix from the user
	printf("Enter the number of rows of matrix B : ");
	scanf("%d",&brow);
	printf("Enter the number of columns of matrix A : ");
	scanf("%d",&bcolumn);
	
	if(acolumn!=brow)
	{
		printf("\nSorry! Muliplication can not be done.");
	}
	else 
	{
		printf("\nEnter the elements of B matrix :\n");
		for(i=0;i<brow;i++)
		{
			for(j=0;j<bcolumn;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}	
	}
	//using for loop for the multiplication between A and B matrices
	printf("\n");
	for(i=0;i<arow;i++)
	{
		for(j=0;j<bcolumn;j++)
		{
			for(k=0;k<brow;k++)
			{
				sum+=a[i][k]*b[k][j];
			}
			c[i][j]=sum;
			sum=0;
		}
	}	
	//using for loop for the output
	printf("\nMuliplication of A and B matrices : \n");
	for(i=0;i<brow;i++)
	{
		for(j=0;j<bcolumn;j++)
		{
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
