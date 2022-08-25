//program which is a Menu-Driven program to perform a simple calculation
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b, x,add,sub,mul;
	float div;
	//assigning the input from the users
	printf("Here,\n  1 = Addition\n  2 = Subtraction\n  3 = Multiplication\n  4 = Division\n  5 = Exit\n");
	printf("Choose the number for the calculation : ");
	scanf("%d",&x);
	
	//performing a simple calculation
	/* 1=Addition, 2=Subtraction, 3=Multiplication,4=Division and 5=Exit */
	switch(x)
	{
		case 1:
			printf("Enter the two numbers ");
			printf("\na = ");
			scanf("%d",&a);
			printf("b = ");
			scanf("%d",&b);
			printf("\n");
			add=a+b;
			printf("Addition : %d",add);
			break;
		case 2:
			printf("Enter the two numbers ");
			printf("\na = ");
			scanf("%d",&a);
			printf("b = ");
			scanf("%d",&b);
			printf("\n");
			sub=a-b;
			printf("Subtraction : %d",sub);
			break;
		case 3:
			printf("Enter the two numbers ");
			printf("\na = ");
			scanf("%d",&a);
			printf("b = ");
			scanf("%d",&b);
			printf("\n");
			mul=a*b;
			printf("Multiplication : %d",mul);
			break;
		case 4:
			printf("Enter the two numbers ");
			printf("\na = ");
			scanf("%d",&a);
			printf("b = ");
			scanf("%d",&b);
			printf("\n");
			div=a/b;
			printf("Division : %0.2f",div);
			break;
		case 5:
			exit(1);
			break;
		default:
			printf("\nInvalide\nPlease Enter the number among 1 , 2, 3, 4, and 5.");
			break;
			
	}
	return 0;
}
