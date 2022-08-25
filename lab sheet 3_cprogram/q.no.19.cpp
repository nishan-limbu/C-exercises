//program to display upper triangular matrix
#include<stdio.h>
int main()
{
	int a[50][50];
	int i,j,rows,colms;
	printf("Enter the number of Rows of a matrix A :");
	scanf("%d",&rows);
	printf("\nEnter the number of Columns of a matrix A :");
	scanf("%d",&colms);
	printf("\nEnter the elements of matrix A:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<colms;j++)
		{
			printf("Element in a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	//printf("\nLower Triangular Matrix A :\n");
	//using for-loop for displaying lower triangular matrix A
//	for(i=0;i<rows;i++)
//	{
//		for(j=0;j<colms;j++)
//		{
//			if(i>=j)  //row>=column
//			{
//				printf("%d\t",a[i][j]);
//			}
//			else
//			{
//				printf("0");
//				printf("\t");
//			}
//		}
//		printf("\n");
//	}

	 //the below code is for displaying upper triangular matrix
	printf("\nUpper Triangular Matrix A :\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<colms;j++)
		{
			if(i>j)   /*row>colm*/
			{
				printf("0");
				printf("\t");
			}
			else
			{
				printf("%d\t",a[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
