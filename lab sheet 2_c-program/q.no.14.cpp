//program to display the first n terms of Fibonacci series.
#include<stdio.h>
int main()
{
	int num, i, a=0, b=1, c;
	
	//assigning the input from the users
	printf("Enter the first n terms : ",num);
	scanf("%d",&num);
	
	//using loop for displaying the first n terms of fibonacci series
	for(i=1; i<=num; i++)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
