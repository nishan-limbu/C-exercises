//program of the game (GUESS THE NUMBER)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int number,guess=0,nguesses=1;
	srand(time(NULL));
	number=(rand()%100)+1;
	printf("I have a number in my mind (0-99). Can you guess it?\n");
	do{
		printf("Enter the number : ");
		scanf("%d",&guess);
		printf("\n");
		if(number==guess)
		{
		printf("You Guess it right.\n");
		printf("You guess my number in %d guesses",nguesses);
		}
		else if(guess>number)
		{
		printf("Enter lower number.\n");
		}
		else 
		{
		printf("Enter the higher number\n");
		}
		printf("\n");
		nguesses++;
	}while(guess!=number);
		
	
	
	return 0;
}
