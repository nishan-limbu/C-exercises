//program to find the third angles where two angles are given
#include<stdio.h>

int main(void)
{
	int a,b,c;
	
	//taking inputs from the users
	printf("Enter the two angles of the triangle.\n");
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);

	//calculating the thrid angle of a traingle
	c=180-(a+b);
	printf("\nThe third angle of a triangle is %d",c);
}
