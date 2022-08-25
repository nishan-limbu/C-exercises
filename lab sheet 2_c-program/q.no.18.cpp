//program to print a string in reverse order
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i,c=0;
	
	//assigning the input from the user
	printf("Enter the string : ");
	gets(str);
	
	//using for loop
	for(i=0;str[i]!='\0';i++)  //counting number of characters of string
	{
		c++;
	}
	printf("\nThe reverse of %s is ",str);
	
	for(i=c-1; i>=0;i--)  //print string in reverse order
	{
		printf("%c",str[i]);
	}
	
	return 0;
}
