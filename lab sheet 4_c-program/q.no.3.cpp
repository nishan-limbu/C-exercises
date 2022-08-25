//program to convert decimal to binary number using the function
#include<stdio.h>
#include<stdlib.h>
void conversion(int);
int main()
{
	int binary;
	int num;
	printf("Enter the decimal number : ");
	scanf("%d",&num);
	conversion(num);
	return 0;	
}
void conversion(int num)
{
	int binary=0,i=1,rem;
	while(num!=0)
	{
		rem=num%2;
		binary=binary+(rem*i);
		i=i*10;
		num=num/2;	
	}
	printf("\nBinary eqivalent = %d.",binary);

}
