//program to check wheether a number is a prime or not using the function
#include<stdio.h>
int prime_or_not(int);

int main()
{
	int num,temp;
	
	printf("Enter the number : ");
	scanf("%d",&num);

	if(	prime_or_not(num))
	{
		printf("\n%d is a prime number.",num);
	}
	else 
	{
		printf("\n%d is not a prime number.",num);
	}
	return 0;
}
int prime_or_not(int num)
{
	int i,temp;
	if(num==1)
	{
		return 1;
	}
	for(i=2;i<=(num/2);i++)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
	return 1;
}
