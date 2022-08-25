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
	printf("Type START :......");
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
		printf("Bringing the element of column 1 into middle column :\n"); //bring the column that contain the choosen number into middle
		printf("2   1   3 \n");
		printf("5   4   6 \n");
		printf("8   7   9 \n");
		printf("11  10  12\n");
		printf("14  13  15\n");
		printf("\n");
		printf("\n");
		printf("Arranging into row :");
		printf("2 5 8 11 14 1 4 7 10 13 3 6 9 12 15\n");
		printf("Dividing the above row into three column :\n");
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
			printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
			printf("5   2   8 \n");
			printf("14  1   11 \n");
			printf("7   4   10 \n");
			printf("3   6   13\n");
			printf("12  9   15\n");
			printf("\n");
			printf("\n");
			printf("Arranging into row :");
			printf("5 14 7 3 12 2 1 4 6 9 8 11 10 13 15\n");
			printf("Dividing the above row into three column :\n");
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
			//again using if........statement
			if(z==1)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle	
				printf("14  5  7 \n");
				printf("12  2  3 \n");
				printf("4   1   6 \n");
				printf("8   11  9\n");
				printf("13  10  15\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("14 12 4 8 13 4 2 1 11 10 7 3 6 9 15\n");
		
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 1.");
			}
			else if(z==2)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("5   14  7 \n");
				printf("2   12  3 \n");
				printf("1   4   6 \n");
				printf("11  8   9\n");
				printf("10  13  15\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("5 2 1 11 10 14 12 4 8 13 7 3 6 9 15\n");
				
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 4.");
			}
			else if(z==3)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("5   7   14 \n");
				printf("2   3   12\n");
				printf("1   6   4\n");
				printf("11  9   8\n");
				printf("10  15  13\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("5 2 1 11 10 7 3 6 9 15 14 12 4 8 13\n");
				
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 6.");
			}
		}
		else if(y==2)
		{
			printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
			printf("2   5   8 \n");
			printf("1   14  11 \n");
			printf("4   7   10 \n");
			printf("6   3   13\n");
			printf("9   12  15\n");
			printf("\n");
			printf("\n");
			printf("Arranging into row :");
			printf("2 1 4 6 9 5 14 7 3 12 8 11 10 13 15\n");
			printf("Dividing the above row into three column :\n");
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
			//again using if........statement
			if(z==1)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("1   2  4 \n");
				printf("9   5  6 \n");
				printf("7   14 3 \n");
				printf("8   11 12\n");
				printf("13  10  15\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("1 9 7 8 13 2 5 14 11 10 4 6 3 12 15\n");
				
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 14.");
			}
			else if(z==2)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("2   1  4 \n");
				printf("5   9  6 \n");
				printf("14  7  3 \n");
				printf("11  8  12\n");
				printf("10  13  15\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("2 5 14 11 10 1 9 7 8 13 4 6 3 12 15\n");
				
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 7.");
			}
			else if(z==3)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("2   4  1 \n");
				printf("5   6  9 \n");
				printf("14  3  7 \n");
				printf("11  12 8\n");
				printf("10  15  13\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("2 5 14 11 10 4 6 3 12 15 1 9 7 8 13\n");
				
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 3.");
			}
		}
		else if(y==3)
		{
			printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
			printf("2   8   5 \n");
			printf("1   11  14 \n");
			printf("4   10  7 \n");
			printf("6   13  3\n");
			printf("9   15  12\n");
			printf("\n");
			printf("\n");
			printf("Arranging into row :");
			printf("2 1 4 6 9 8 11 10 13 15 5 14 7 3 12\n");
		    printf("Dividing the above row into three column :\n");
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
			//again using if........statement
			if(z==1)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("1   2   4 \n");
				printf("9   8   6\n");
				printf("10  11  13 \n");
				printf("5   14  15\n");
				printf("3   7   12\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("1 9 10 5 3 2 8 11 14 7 4 6 13 15 12\n");
			
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 11.");
				
			}
			else if(z==2)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("2   1   4 \n");
				printf("8   9   6\n");
				printf("11  10  13 \n");
				printf("14  5   15\n");
				printf("7   3   12\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("2 8 11 14 7 1 9 10 5 3 4 6 13 15 12\n");
				
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 10.");
			}
			else if(z==3)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("2   4   1 \n");
				printf("8   6   9\n");
				printf("11  13  10 \n");
				printf("14  15  5\n");
				printf("7   12  3\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("2 8 11 14 7 4 6 13 15 12 1 9 10 5 3\n");
			
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 13.");
			}
		}
	}
	else if(x==2) //the choosen element is in column 2
	{
		printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle	
		printf("1   2   3 \n");
		printf("4   5   6 \n");
		printf("7   8   9 \n");
		printf("10  11  12\n");
		printf("13  14  15\n");
		printf("\n");
		printf("\n");
		printf("Arranging into row :");
		printf("1 4 7 10 13 2 5 8 11 14 3 6 9 12 15\n");
		printf("Dividing the above row into three column :");
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
		//again using if........statement
		if(y==1)
		{
			printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
			printf("4   1   7 \n");
			printf("13  2   10 \n");
			printf("8   5   11 \n");
			printf("3   6   14\n");
			printf("12  9   15\n");
			printf("\n");
			printf("\n");
			printf("Arranging into row :");
			printf("4 13 8 3 12 1 2 5 6 9 7 10 11 14 15\n");
			printf("Dividing the above row into three column :\n");
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
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("13  4   8 \n");
				printf("12  1   3 \n");
				printf("5   2   6 \n");
				printf("7   10  9\n");
				printf("14  11  15\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("13 12 5 7 14 4 1 2 10 11 8 3 6 9 15\n");
				
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 2.");
				
			}
			else if(z==2)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("4   13  8 \n");
				printf("1   12  3 \n");
				printf("2   5   6 \n");
				printf("10  7   9\n");
				printf("11  14  15\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("4 1 2 10 11 13 12 5 7 14 8 2 6 9 15\n");
			
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 5.");
			}
			else if(z==3)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("4   8  13 \n");
				printf("1   3  12 \n");
				printf("2   6  5 \n");
				printf("10  9  7\n");
				printf("11  15  14\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("4 1 2 10 11 8 3 6 9 15 13 12 5 7 14\n");
				
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 6.");
			}
		}
		else if(y==2)
		{
			printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle	
			printf("1   4   7 \n");
			printf("2   13  10 \n");
			printf("5   8   11 \n");
			printf("6   3   14\n");
			printf("9   12  15\n");
			printf("\n");
			printf("\n");
			printf("Arranging into row :");
			printf("1 2 5 6 9 4 13 8 3 12 7 10 11 14 15\n");
			printf("Dividing the above row into three column :\n");
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
			//again using if........statement
			if(z==1)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("2   1  5 \n");
				printf("9   4  6 \n");
				printf("8   13  3 \n");
				printf("7   10  12\n");
				printf("14  11  15\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("2 9 8 7 14 1 4 13 10 11 5 6 3 12 15\n");
				
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 13.");
			}
			else if(z==2)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("1   2  5 \n");
				printf("4   9  6 \n");
				printf("13  8  3 \n");
				printf("10  7  12\n");
				printf("11  14 15\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("1 4 13 10 11 2 9 8 7 14 5 6 3 12 15\n");
			
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 8.");	
			}
			else if(z==3)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("1   5   2 \n");
				printf("4   6   9 \n");
				printf("13  3   8 \n");
				printf("10  12  7\n");
				printf("11  15  14\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("1 4 13 10 11 5 6 3 12 15 2 9 8 7 14\n");
			
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 3.");
			}
		}
		else if(y==3)
		{
			printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle	
			printf("1   7   4 \n");
			printf("2   10  13 \n");
			printf("5   11  8 \n");
			printf("6   14  3\n");
			printf("9   15  12\n");
			printf("\n");
			printf("\n");
			printf("Arranging into row :");
			printf("1 2 5 6 9 7 10 11 14 15 4 13 8 3 12\n");
			printf("Dividing the above row into three column :\n");
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
			//again using if........statement
			if(z==1)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("2   1   5 \n");
				printf("9   7   6 \n");
				printf("11  10  14\n");
				printf("6   13  3\n");
				printf("14  3   15\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("2 9 11 6 14 1 7 10 13 3 5 6 14 3 15\n");
			
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 10.");
			}
			else if(z==2)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("1   2   5 \n");
				printf("7   9   6 \n");
				printf("10  11  14\n");
				printf("13  6   3\n");
				printf("3   14  15\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("1 7 10 13 3 2 9 11 6 14 5 6 14 3 15\n");
				
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 11.");	
			}
			else if(z==3)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("1   5   2 \n");
				printf("7   6   9 \n");
				printf("10  14  11\n");
				printf("13  3   6\n");
				printf("3   15  14\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("1 7 10 13 3 5 6 14 3 15 2 9 11 6 14\n");
				
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 14.");
			}
		}
	}
	else if(x==3) //the choosen element is in column 3
	{
		printf("Bringing the element of column 3 into middle column :\n");
		printf("1   3   2 \n");
		printf("4   6   5 \n");
		printf("7   9   8 \n");
		printf("10  12  11\n");
		printf("13  15  14\n");
		printf("\n");
		printf("\n");
		printf("Arranging into row :");
		printf("1 4 7 10 13 3 6 9 12 15 2 5 8 11 14\n");
		printf("Dividing the above row into three column :\n");
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
		//again using if...........statement
		if(y==1)
		{
			printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle	
			printf("4   1   7 \n");
			printf("13  3   10\n");
			printf("9   6   12\n");
			printf("2   5   15\n");
			printf("11  8   14\n");
			printf("\n");
			printf("\n");
			printf("Arranging into row :");
			printf("4 13 9 2 11 1 3 6 5 8 7 10 12 15 14\n");
			printf("Dividing the above row into three column :\n");
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
			//again using if........statement
			if(z==1)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("13   4   9 \n");
				printf("11   1   2 \n");
				printf("6    3   5 \n");
				printf("7    10  8\n");
				printf("15   12  14\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("13 11 6 7 15 4 1 3 10 12 9 2 5 8 14\n");
			
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 3.");
				
			}
			else if(z==2)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("4   13  9 \n");
				printf("1   11  2 \n");
				printf("3   6   5 \n");
				printf("10  7   8\n");
				printf("12  15  14\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("4 1 3 10 12 13 11 6 7 15 9 2 5 8 14\n");
			
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 6.");
			}
			else if(z==3)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("4   9   13 \n");
				printf("1   2   11\n");
				printf("3   5   6\n");
				printf("10  8   7\n");
				printf("12  14  15\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("4 1 3 10 12 9 2 5 8 14 13 11 6 7 15\n");
			
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 5.");	
			}
		}
		else if(y==2)
		{
			printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle	
			printf("1   4   7 \n");
			printf("3   13  10\n");
			printf("6   9   12\n");
			printf("5   2   15\n");
			printf("8   11  14\n");
			printf("\n");
			printf("\n");
			printf("Arranging into row :");
			printf("1 3 6 5 8 4 13 9 2 11 7 10 12 15 14\n");
			printf("Dividing the above row into three column :\n");
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
			//again using if........statement
			if(z==1)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("3   1   6 \n");
				printf("8   4   5 \n");
				printf("9   13  2 \n");
				printf("7   10  11\n");
				printf("15  12  14\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("3 8 9 7 15 1 4 13 10 12 6 5 2 11 14\n");
			
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 13.");
			}
			else if(z==2)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("1   3   6 \n");
				printf("4   8   5 \n");
				printf("13  9   2 \n");
				printf("10  7   11\n");
				printf("12  15  14\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("1 4 13 10 12 3 8 9 7 15 6 5 2 11 14\n");
			
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 9.");
			}
			else if(z==3)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("1   6   3 \n");
				printf("4   5   8 \n");
				printf("13  2   9 \n");
				printf("10  11  7\n");
				printf("12  14  15\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("1 4 13 10 12 6 5 2 11 14 3 8 9 7 15\n");
			
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 2.");
			}
		}
		else if(y==3)
		{
			printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle	
			printf("1   7   4 \n");
			printf("3   10  13\n");
			printf("6   12  9\n");
			printf("5   15  2\n");
			printf("8   14  11\n");
			printf("\n");
			printf("\n");
			printf("Arranging into row :");
			printf("1 3 6 5 8 7 10 12 15 14 4 13 9 2 11\n");
			printf("Dividing the above row into three column :\n");
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
			//again using if........statement
			if(z==1)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("3   1   6 \n");
				printf("8   7   5 \n");
				printf("12  10  15 \n");
				printf("4   13  14\n");
				printf("2   9  11\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("3 8 12 4 2 1 7 10 13 9 6 5 15 14 11\n");
				
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 10.");	
			}
			else if(z==2)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("1   3   6 \n");
				printf("7   8   5 \n");
				printf("10  12  15 \n");
				printf("13  4   14\n");
				printf("9   2  11\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("1 7 10 13 9 3 8 12 4 2 6 5 15 14 11\n");
			
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 12.");	
			}
			else if(z==3)
			{
				printf("Bring the column that contain the choosen number into middle :\n"); //bring the column that contain the choosen number into middle
				printf("1   6   3 \n");
				printf("7   5   8 \n");
				printf("10  15  12 \n");
				printf("13  14  4\n");
				printf("9   11  2\n");
				printf("\n");
				printf("\n");
			//	printf("Arranging into row :");
			//	printf("1 7 10 13 9 6 5 15 14 11 3 8 12 4 2\n");
			
				//output
				printf("Finally, I Found Your Choosen Number\n");
				printf("      Your lucky number is 15.");
			}
		}
	}
	return 0;
}
