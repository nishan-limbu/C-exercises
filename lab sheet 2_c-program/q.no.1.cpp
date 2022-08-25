//porgram to determine whether he/she is eligible or not for casting vote
#include<stdio.h>
int main()
{
	int age;
	
	//assigning input from the user
	printf("Enter the age : ");
	scanf("%d",&age);
	
	//checking whether he/she is eligible or not for casting vote
	if(age<18)
	{
		printf("He is not eligible for casting vote.");
	}
	else
		printf("He is eligible for casting vote.");
	
	return 0;
}
