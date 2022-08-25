//program to find the maximum number among three numbers from the users
#include<stdio.h>

int main(void)
{
	int a,b,c;
	
	//assigning the numbers from the users
	printf("Enter the three numbers");
	printf("\na = ");
	scanf("%d",&a);
 	printf("\nb = ");
	scanf("%d",&b);
	printf("\nc = ");
	scanf("%d",&c);
	
	//finding the maximum numbers using if else
	if ((a>b)&&(a>c))	
	{
		printf("\n%d is the maximum number.",a);
	}
	else if ((b>c)&&(b>a))
	{
		printf("\n%d is the maximum number.",b);
	}
	else
		printf("\n%d is the maximum number.",c);
		
	
}
