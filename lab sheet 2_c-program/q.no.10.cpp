//program to display the pattern like right angle triangle with a number
#include<stdio.h>
int main()
{
	int totrow,row,colm,pattern,i=1;
	
	//assigning input from the user
	printf("Enter the number of row : ");
	scanf("%d",&totrow);
	
	//loop for displaying the right angle traingle pattern with a number
	for(row=1;row<=totrow;row++)
	{
		for(colm=1;colm<=row;colm++)
		{
			printf(" %d",i);
			i++;
		}
		
		printf("\n");
	}
	return 0;
}
