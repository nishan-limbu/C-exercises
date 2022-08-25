//program to convert a decimal number into binary without using an array
#include<stdio.h>

int main(void)
{
	int num,var,binary=0,rem,i=1;	
	//assigning the input from the user
	printf("Enter the decimal number : ");
	scanf("%d",&num);
	
	var=num;
	
	//using while loop
	while(num!=0)
	{
		rem=num%2;
		num=num/2;
		binary=binary+(rem*i);
		i=i*10;
	}
	printf("The binary number of %d is %d.",var,binary);
	

}
