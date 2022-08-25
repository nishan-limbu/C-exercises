//program to count total number of vowel or consonant in a string
#include<stdio.h>
int main()
{
	char str[50];
	int cons=0,vow=0,i=0;
	printf("Enter the string : ");
	scanf("%s",&str);
	//using while loop for counting the consonent and vowel letters in stringww
	while(str[i]!='\0')
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			vow++;
			i++;
		}
		else
		{
			cons++;
			i++;
		}
	}
	printf("\nNumber of Consonent in a string : %d",cons);
	printf("\nNumber of Vowel in a string : %d",vow);
	
	return 0;
}
