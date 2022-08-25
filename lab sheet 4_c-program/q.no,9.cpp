//program to print GCD(HCF) of two numbers using recursion
#include<stdio.h>
int gcd(int,int);
int main()
{
	int a,b;
	printf("Enter the two numbers :\n");
	printf("a : ");
	scanf("%d",&a);
	printf("b : ");
	scanf("%d",&b);
	//printfing Greatest Common Digit(GCD) of two numbers
	printf("\nGCD of %d and %d is %d.",a,b,gcd(a,b));
	return 0;
}

int gcd(int a,int b)
{
	if(a==0)
	{
		return b;
	}
	else if(b==0)
	{
		return a;
	}
	else
	{
		return (b,a%b);
	}
}


