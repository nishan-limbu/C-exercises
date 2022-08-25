//progrma to find the distance between given two points from the users
#include<stdio.h>
#include<math.h>

int main(void)
{
	int x1,x2,y1,y2;
	float d; //d=distance
	
	//assigning the values from the users
	printf("Enter the two points :");
	printf("\nx1 = ");
	scanf("%d",&x1);
	printf("\nx2 = ");
	scanf("%d",&x2);
	printf("\ny1 = ");
	scanf("%d",&y1);
	printf("\ny2 = ");
	scanf("%d",&y2);
	
	//calculating the distance between the point
	d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("The distance between given points is %.2f",d);
	
}
