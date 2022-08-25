//program to print individual characters of string in reverse order
#include<stdio.h>

int main()
{
	char str[50];
	int i,j,count=0;
	printf("Enter the characters : ");
	scanf("%s",&str);
	//using for-loop for counting the number of characters of a string.
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("\nThe Reverse of a sting : ");
	//using for-loop for printing the string in reverse order
	for(i=count-1;i>=0;i--)
	{
		printf("%c ",str[i]);
	}
	return 0;
}
