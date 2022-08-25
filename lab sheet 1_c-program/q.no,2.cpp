//program to perform addition, subtraction, mutiplication,division and modulus 
#include<stdio.h>

int main(void)
{
	int a,b;
	int add,sub,mul,mod;
	float div;
	
	//input taken from the users
	printf("Enter the two numbers");
	printf("\n");
	printf("a : ");
	scanf("%d",&a);
	printf("b : ");
	scanf("%d",&b);	
	
	//calculating the different operations
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=b/a;
	mod=b%a;
	printf("\nAddition = %d \nSubtraction = %d \nMultiplication = %d \nDivision = %.2f \nModulus = %d",add,sub,mul,div,mod);
}
