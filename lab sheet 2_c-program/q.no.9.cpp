//program to display the pattern like right angle triangle with number.
#include<stdio.h>
int main(void)
{
	int total_row,row,colm;
	
	//assigning the total number of rows from the user
	printf("Enter the number of rows : ");
	scanf("%d",&total_row);	
	
	for(row=1; row<=total_row;row++)
	{
		for(colm=1; colm<=row;colm++)
		{
			printf("%d ",colm);
		}
		printf("\n");
	}
	return 0;
}	

	
	
	
	
	

