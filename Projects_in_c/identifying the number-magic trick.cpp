//program for plauing a guessing game or reading others mind
#include<stdio.h>
#include<string.h>
int main()
{
	int x,y,z;
	char start[6];
	printf("HELLLO!!\n");
	printf("THIS IS A MAGIC TRICK\nWHICH WILL BLOW \nYOUR MIND\n");
	printf("\n");
	printf("\n");
	printf("\n");		
	printf("To begin the magic tricks\n\t PLEASE\n\n");
	printf("Type START :...");
	scanf("%s",&start);
	printf("Choose the number from below :\n");
	printf("1   2   3 \n");
	printf("4   5   6 \n");
	printf("7   8   9 \n");
	printf("10  11  12\n");
	printf("13  14  15\n");
	printf("\n");
	printf("\n");
	
	//choose the number and say in which column does it exist
	printf("The Menu-Driven is shown :\n");
	printf("1 : Column 1\n2 : Column 2\n3 : Column 3\n\n");
	printf("Choose the number : ");
	scanf("%d",&x);
	
	//using if...statement
	if(x==1)  //choosen element or number is in column 1
	{
		
		printf("Find the number that you have choosen from below :\n");
		printf("2   5   8 \n");
		printf("1   14  11 \n");
		printf("4   7   10 \n");
		printf("6   3   13\n");
		printf("9   12  15\n");
		printf("\n");
		printf("\n");
		//asking the user
		printf("The Menu-Driven is shown :\n");
		printf("1 : Column 1\n2 : Column 2\n3 : Column 3\n\n");
		printf("Choose the number : ");
		scanf("%d",&y);
		//again using the if........statement
		if(y==1)
		{
			
			printf("Find the number that you have choosen from below :\n");
			printf("5   14  7 \n");
			printf("2   12  3 \n");
			printf("1   4   6 \n");
			printf("11  8   9\n");
			printf("10  13  15\n");
			printf("\n");
			printf("\n");
			//asking the user
			printf("The Menu-Driven is shown :\n");
			printf("1 : Column 1\n2 : Column 2\n3 : Column 3\n\n");
			printf("Choose the number : ");
			scanf("%d",&z);
			printf("\n");
			printf("\n");
			//again using if........statement
			if(z==1)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 1.");
			}
			else if(z==2)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 4.");
			}
			else if(z==3)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 6.");
			}
		}
		else if(y==2)
		{
			
			printf("Find the number that you have choosen from below :\n");
			printf("2   1  4 \n");
			printf("5   9  6 \n");
			printf("14  7  3 \n");
			printf("11  8  12\n");
			printf("10  13  15\n");
			printf("\n");
			printf("\n");
			//asking the user
			printf("The Menu-Driven is shown :\n");
			printf("1 : Column 1\n2 : Column 2\n3 : Column 3\n\n");
			printf("Choose the number : ");
			scanf("%d",&z);
			printf("\n");
			printf("\n");
			//again using if........statement
			if(z==1)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 14.");
			}
			else if(z==2)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 7.");
			}
			else if(z==3)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 3.");
			}
		}
		else if(y==3)
		{
			
		    printf("Find the number that you have choosen from below :\n");
			printf("2   1   4 \n");
			printf("8   9   6\n");
			printf("11  10  13 \n");
			printf("14  5   15\n");
			printf("7   3   12\n");
			printf("\n");
			printf("\n");
			//asking the user
			printf("The Menu-Driven is shown :\n");
			printf("1 : Column 1\n2 : Column 2\n3 : Column 3\n\n");
			printf("Choose the number : ");
			scanf("%d",&z);
			printf("\n");
			printf("\n");
			//again using if........statement
			if(z==1)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 11.");
				
			}
			else if(z==2)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 10.");
			}
			else if(z==3)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 13.");
			}
		}
	}
	else if(x==2) //the choosen element is in column 2
	{
		
		printf("Find the number that you have choosen from below :\n");
		printf("1   4   7 \n");
		printf("2   13  10 \n");
		printf("5   8   11 \n");
		printf("6   3   14\n");
		printf("9   12  15\n");
		printf("\n");
		printf("\n");
		//asking the user
		printf("The Menu-Driven is shown :\n");
		printf("1 : Column 1\n2 : Column 2\n3 : Column 3\n\n");
		printf("Choose the number : ");
		scanf("%d",&y);
		printf("\n");
		printf("\n");
		//again using if........statement
		if(y==1)
		{
			
			printf("Find the number that you have choosen from below :\n");
			printf("4   13  8 \n");
			printf("1   12  3 \n");
			printf("2   5   6 \n");
			printf("10  7   9\n");
			printf("11  14  15\n");
			printf("\n");
			printf("\n");
			//asking the user
			printf("The Menu-Driven is shown :\n");
			printf("1 : Column 1\n2 : Column 2\n3 : Column 3\n\n");
			printf("Choose the number : ");
			scanf("%d",&z);
			//again using if........statement
			if(z==1)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 2.");
				
			}
			else if(z==2)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 5.");
			}
			else if(z==3)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 6.");
			}
		}
		else if(y==2)
		{
			
			printf("Find the number that you have choosen from below :\n");
			printf("1   2  5 \n");
			printf("4   9  6 \n");
			printf("13  8  3 \n");
			printf("10  7  12\n");
			printf("11  14  15\n");
			printf("\n");
			printf("\n");
			//asking the user
			printf("The Menu-Driven is shown :\n");
			printf("1 : Column 1\n2 : Column 2\n3 : Column 3\n\n");
			printf("Choose the number : ");
			scanf("%d",&z);
			printf("\n");
			printf("\n");
			//again using if........statement
			if(z==1)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 13.");
			}
			else if(z==2)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 8.");	
			}
			else if(z==3)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 3.");
			}
		}
		else if(y==3)
		{
			
			printf("Find the number that you have choosen from below :\n");
			printf("1   2   5 \n");
			printf("7   9   6 \n");
			printf("10  11  14\n");
			printf("13  6   3\n");
			printf("3   14  15\n");
			printf("\n");
			printf("\n");
			//asking the user
			printf("The Menu-Driven is shown :\n");
			printf("1 : Column 1\n2 : Column 2\n3 : Column 3\n\n");
			printf("Choose the number : ");
			scanf("%d",&z);
			printf("\n");
			printf("\n");
			//again using if........statement
			if(z==1)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 10.");
			}
			else if(z==2)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 11.");	
			}
			else if(z==3)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 14.");
			}
		}
	}
	else if(x==3) //the choosen element is in column 3
	{
		
		printf("Find the number that you have choosen from below :\n");
		printf("1   4   7 \n");
		printf("3   13  10\n");
		printf("6   9   12\n");
		printf("5   2   15\n");
		printf("8   11  14\n");
		printf("\n");
		printf("\n");
		//asking the user
		printf("The Menu-Driven is shown :\n");
		printf("1 : Column 1\n2 : Column 2\n3 : Column 3\n\n");
		printf("Choose the number : ");
		scanf("%d",&y);
		printf("\n");
		printf("\n");
		//again using if...........statement
		if(y==1)
		{
			
			printf("Find the number that you have choosen from below :\n");
			printf("4   13  9 \n");
			printf("1   11  2 \n");
			printf("3   6   5 \n");
			printf("10  7   8\n");
			printf("12  15  14\n");
			printf("\n");
			printf("\n");
			//asking the user
			printf("The Menu-Driven is shown :\n");
			printf("1 : Column 1\n2 : Column 2\n3 : Column 3\n\n");
			printf("Choose the number : ");
			scanf("%d",&z);
			printf("\n");
			printf("\n");
			//again using if........statement
			if(z==1)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 3.");
				
			}
			else if(z==2)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 6.");
			}
			else if(z==3)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 5.");	
			}
		}
		else if(y==2)
		{
			
			printf("Find the number that you have choosen from below :\n");
			printf("1   3   6 \n");
			printf("4   8   5 \n");
			printf("13  9   2 \n");
			printf("10  7   11\n");
			printf("12  15  14\n");
			printf("\n");
			printf("\n");
			//asking the user
			printf("The Menu-Driven is shown :\n");
			printf("1 : Column 1\n2 : Column 2\n3 : Column 3\n\n");
			printf("Choose the number : ");
			scanf("%d",&z);
			printf("\n");
			printf("\n");
			//again using if........statement
			if(z==1)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 13.");
			}
			else if(z==2)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 9.");
			}
			else if(z==3)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("      	  Your number is 2.");
			}
		}
		else if(y==3)
		{
			
			printf("Find the number that you have choosen from below :\n");
			printf("1   3   6 \n");
			printf("7   8   5 \n");
			printf("10  12  15 \n");
			printf("13  4   14\n");
			printf("9   2  11\n");
			printf("\n");
			printf("\n");
			//asking the user
			printf("The Menu-Driven is shown :\n");
			printf("1 : Column 1\n2 : Column 2\n3 : Column 3\n\n");
			printf("Choose the number : ");
			scanf("%d",&z);
			printf("\n");
			printf("\n");
			//again using if........statement
			if(z==1)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 10.");	
			}
			else if(z==2)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 12.");	
			}
			else if(z==3)
			{
				printf("Finally, I Found Your Choosen Number\n");
				printf("          Your number is 15.");
			}
		}
	}
	return 0;
}
