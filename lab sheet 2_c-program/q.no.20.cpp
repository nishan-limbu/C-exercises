//program to compute the area of the various geometrical shape
#include<stdio.h>
#include<math.h>

int main()
{
	int num,r,len,bre,s, area_of_rect=0,a,b,c,area_of_cir=0,area_of_tri;
	
	
	//displaying the Menu-Driven 
	printf("Input 1 for area of circle");
	printf("\nInput 2 for area of rectangle");
	printf("\nInput 3 for area of triangle");
	
	//assigning the input from the users
	printf("\nChoose any input from above : ");
	scanf("%d",&num);
	
	if(num==1)
	{
		printf("Enter the value :\n");
		printf("radius = ");
		scanf("%d",&r);
		area_of_cir=3.1459*r*r;
		printf("Area of circle : %d",area_of_cir);
	}
	else if(num==2)
	{
		printf("Enter the value :\n");
		printf("length = ");
		scanf("%d",&len);
		printf("breadth = ");
		scanf("%d",&bre);
		area_of_rect=len*bre;
		printf("Area of rectangle : %d",area_of_rect);	
	}
	else if(num==3)
	{
		printf("Enter the sides which are not equal to each other :\n");
		printf("a = ");
		scanf("%d",&a);
		printf("b = ");
		scanf("%d",&b);
		printf("c = ");
		scanf("%d",&c);
		s=(a+b+c)/2; //s=semi- perimeter of the triangle
		area_of_tri=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("\nSemi_perimeter ; %d\nArea of traingle : %d",s,area_of_tri);	
	}
	else
		printf("Invalide !!!\nChoose number among 1, 2, and 3");
	

	return 0;
}
