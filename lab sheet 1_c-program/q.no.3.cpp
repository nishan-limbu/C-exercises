//program to find the perimerter and area of the circle
#include<stdio.h>

int main(void)
{
	float p,area,r;
	
	//assigning radius from the user
	printf("Enter the value of the radius of the circle = ");
	scanf("%f",&r);
	
	//calculating the perimer=ter and area of the circle
	p=2*3.14159*r;  //p=perimeter of the circle
	area=3.14159*r*r; //a=area of the circle
	printf("\nPerimeter of the circle is %f",p);
	printf("\nArea of the circle is %f",area);
}
