//program to determine the quadrant of specific XY co-ordinates
#include<stdio.h>

int main(void)
{
	int x,y;
	
	//assigning the co-ordinates from the users
	printf("Enter the co-ordinate : ");
	printf("\nX = ");
	scanf("%d",&x);
	printf("Y = ");
	scanf("%d",&y);
	
	//determining the quadrant 
	if((x>0)&&(y>0))
	{
		printf("It lies on first quadrant.");
	}
	else if((x<0)&&(y>0))
	{
		printf("It lies on second quadrant.");
	}
	else if((x<0)&&(y<0))
	{
		printf("It lies on third quadrant.");
	}
	else
		printf("It lies on fourth quadrant.");
		
}
