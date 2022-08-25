//program to add two numbers using pointers
#include<stdio.h>
int main()
{
	int *a,*b,sum,x,y;
	//assingning the values of x and y from users
	printf("Enter the values :\n");
	printf("x : ");
	scanf("%d",&x);	
	printf("y : ");
	scanf("%d",&y);	
	//using the pointers
	a=&x; //holding the address of x in a.
	b=&y; //holding the address of y in b.
	//using sum pointer for addition
	sum=*a + *b;
	printf("\nSum of %d and %d is %d.",x,y,sum);
	return 0;
}
