//program to swap two numbers using function
#include<stdio.h>
//using function prototype
void swaping_number(int,int);
//main function
int main()
{
	int a,b;
	printf("Enter the value of \n");
	printf("a : ");
	scanf("%d",&a);
	printf("\nb : ");
	scanf("%d",&b);
	printf("\nBefore Swapping, a = %d    and     b = %d",a,b);
	swaping_number(a,b);
	return 0;
}
//function definition
void swaping_number(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter Swapping, a = %d    and     b = %d",a,b);
}
