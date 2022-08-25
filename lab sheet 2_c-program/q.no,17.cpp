//program to find the length of a string withut using the library function
#include<stdio.h>
#include<string.h>
int main()
{

	char str[50],i;
	
	//assigning the input from the user
	printf("Enter the string : ");
	gets(str);
	
	for(i=0; str[i]!='\0';i++);
	
	printf("The length of the string is %d.",i);
	
	return 0;
}
