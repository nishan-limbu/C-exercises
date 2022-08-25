//program to find the factorial of given nubmer using pointers
#include<stdio.h>
int main()
{
	int number,*ptr,i,factorial=1;
	printf("Enter a number : ");
	scanf("%d",&number);
	ptr=&factorial;
	for(i=1;i<=number;i++)
	{
		*ptr=(*ptr)*i;
	}
	printf("\nFactorial of %d is %d.",number,factorial);
	return 0;
}
