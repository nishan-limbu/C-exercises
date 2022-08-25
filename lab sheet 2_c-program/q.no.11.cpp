//program to display the pattern like a pyramid with numbers increased by 1.
#include<stdio.h>
int main(void)
{
	int totrow,row,colm,pattern,i=1;
	printf("Enter the number of row : ");
	scanf("%d",&totrow);
	
	for(row=1;row<=totrow;row++)
	{
		for(colm=1;colm<=(totrow-row);colm++)
		{
			printf(" ");
		}
		for(pattern=1; pattern<=row;pattern++)
		{
			printf(" %d",i);
			i++;
		}
		printf("\n");
	}
	return 0;
}
