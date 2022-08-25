//program of scissor, paper and rock(GAME)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int scissorpaperrock(char you, char comp)
{
	if(you==comp)
	{
		return 0;
	}
	if(you=='s' && comp=='r')
	{
		return -1;
	}
	else if(you=='r' && comp=='s')
	{
		return 1;
	}
	if(you=='r' && comp=='p')
	{
		return 1;
	}
	else if(you=='p' && comp=='s')
	{
		return -1;
	}
	if(you=='r'&&comp=='p')
	{
		return -1;
	}
	else if(you=='p'&&comp=='r'){
			return 1;
	}
}
int main()
{
	int number;
	char you,comp;
	srand(time(0));
	number=rand()%100+1;
	
	if(number<33)
	{
		comp='s';
	}
	else if(number>33 && number<66)
	{
		comp='r';
	}
	else
	{
		comp='p';
	}
	printf("Choose the below:\n");
	printf("s = scissor\n");
	printf("r = rock\n");
	printf("p = paper\n");
	printf("\n");
	printf("Enter : ");
	scanf("%c",&you);
	int result=scissorpaperrock(you,comp);
	printf("You choose %c and Computer choose %c.\n\n",you,comp);

	if(result==0)
	{
		printf("Game Draw\n");
	}
	else if(result==1)
	{
		printf("Game Win\n");
	}
	else
	{
		printf("Game Loose\n");	
	}
	
	return 0;
		
}
