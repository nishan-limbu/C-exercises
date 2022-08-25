//program to find the square of any number using the function
#include<stdio.h>
#include<conio.h>
float square_number(int number);
int main()
{
	int number;
	float square;
	
	printf("Enter the number : ");
	scanf("%d",&number);
	square=square_number(number);
	printf("\nSquare of %d is %.2f.",number,square);
	
	return 0;
}
float square_number(int number)
{	
	return number*number;
}
