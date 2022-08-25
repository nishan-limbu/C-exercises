//program to find HCF of two number
#include<stdio.h>
int main()
{
	int a,b,min,HCF,i;
	//assigning the input from the users
	printf("Enter the two number\n");
	printf("a : ");
	scanf("%d",&a);
	printf("\nb : ");
	scanf("%d",&b);
	
	min=(a<b)?a:b; //min=minimum
	
	//using for loop
	for(i=1;i<=min;i++)
	{
		if((a%i==0)&&(b%i==0))
		{
			HCF=i;
		}
	}
	printf("\nThe HCF of %d and %d is %d.",a,b,HCF);
	
	return 0;
}
