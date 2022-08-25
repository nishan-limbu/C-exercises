//program to determine whether a given nubmer is prime or not
#include<stdio.h>
int main()
{
	int num,i,temp=0;
	
	//assigning the input from the users
	printf("Enter any number : ");
	scanf("%d",&num);
	
	//using loop for deternining whether a given nubmer is prime or not.
	for(i=2; i<=num/2; i++)
	{
		if((num%i)==0)
		{
			temp=1;
			break;
		}
	}
	if(temp==1)
	{
		printf("Given number is not a prime number.");
	}
	else
		printf("Given nubmer is a prime number.");
		
	return 0;
}
