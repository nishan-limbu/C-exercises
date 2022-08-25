//program to accept a grade and declare the equivalent description
#include<stdio.h>

int main(void)
{
	char grade;
	
	//assigning the input from the user
	/* E=Excellent , V=Very Good ,  G=Good ,  A=Average ,and F=Fail */
	printf("Enter the grade : ");
	scanf("%c",&grade);
	
	//declaring the equivalent description
	switch(grade)
	{
		case'e':
		case'E':
			printf("Excellent");
			break;
		case'v':
		case'V':
			printf("Very Good");
			break;
		case'g':
		case'G':
			printf("Good");
			break;
		case'a':
		case'A':
			printf("Average");
			break;
		case'f':
		case'F':
			printf("Fail");
			break;
		default:
			printf("\nInvalid grade.\nEnter the grade among E, V, G, A and F");
			break;
			
	}	
	return 0;
}
