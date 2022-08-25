//program to find teh factorial of any number using recursion
#include<stdio.h>
int factorial(int);//function declaration

int main()
{
	int num;
	printf("Enter the number for factorization : ");
	scanf("%d",&num);
	printf("\nThe factorial of %d is %d.",num,factorial(num));
	return 0;
}

int factorial(int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	{
		return (num*factorial(num-1));
	}
}
