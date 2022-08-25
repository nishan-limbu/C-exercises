//program to convert centigrade to fahrenheit
#include<stdio.h>

int main(void)
{
	int c; //c=centigrade
	float f; //f=fahrenheit
	
	//assigning the value from the users
	printf("Enter the centigrate : ");
	scanf("%d",&c);
	
	//converting the centigrade into fahrenheit
	f=(c*9/5)+32;
	printf("\nThe fahrenheit is %.2f",f);
	
}
