//program to display the n terms of square natural nubmer and their sum
#include<stdio.h>
int main()
{
	int num,i,sum=0;
	
	//assigning the input from the user
	printf("Enter the number : ");
	scanf("%d",&num);
	
	//loop for displaying the n terms of square natural number and their sum
	for(i=1; i<=num;i++)
	{
		printf("%d ",i*i);
		sum +=i*i;
	}

	printf("\nsum : %d",sum);
	
	return 0;
}
