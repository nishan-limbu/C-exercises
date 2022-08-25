//program to print Fibonacci series using recursion
#include<stdio.h>
int fibonacci(int);
int main()
{
	int num,i;
	printf("Enter the number of terms for Fibonacci series : ");
	scanf("%d",&num);
	for(i=1;i<num+1;i++)
	{
		printf("%5d",fibonacci(i));
		fibonacci(num);
	}
	return 0;
}

int fibonacci(int num)
{
	if(num==1 || num==2)
	{
		return(1);
	}
	return (fibonacci(num-1)+fibonacci(num-2));
}
