//program to find maximum number between two numbers using pointers
#include<stdio.h>
int main()
{
	int a,b,*x,*y;	
	printf("Enter the two numbers :\n");
	printf("a : ");
	scanf("%d",&a);	
	printf("b : ");
	scanf("%d",&b);	
	x=&a;
	y=&b;
	if(*x>*y)
	{
		printf("\n%d is maximum number.",*x);
	}
	else
	{
		printf("\n%d is maximum number.",*y);
	}
	return 0;
}
