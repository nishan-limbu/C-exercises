//program to display the multiplication of the given integer.
#include<stdio.h>
int main(void)
{
	
	int num,i;
	
	//assigning input from the user
	printf("Enter the number for multiplication : ");
	scanf("%d",&num);
	
	//using for loop
	for(i=1;i<=10;i++)
	{
		printf("\n%d x %d = %d",num,i,num*i);
	}
	return 0;
	
}


