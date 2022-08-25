//progrom to calculate the determinant of 3x3 matrix
#include<stdio.h>
int main()
{
	int a[3][3],i,j,det;
	//assigning the element of 3x3 matrix from the user
	printf("Enter the element of 3x3 matrix A :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter number of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//printing the element of matrix A
	printf("\nMatrix A :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%2d",a[i][j]);
		}
		printf("\n");
	}
	//using for-loop for calculating the determinant of matrix A
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			det=a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]);
		}
	}
	//printing the rdeterminant of matrix A
	printf("\nDeterminant of matrix A : %d\n",det);

	
	return 0;
}


