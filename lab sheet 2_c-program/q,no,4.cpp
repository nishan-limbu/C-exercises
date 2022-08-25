//program to check whether an alphabet is a consonant or vowel
#include<stdio.h>

int main(void)
{
	char alp;	
	//assigning the alphabets from the user
	printf("Enter any alphabet : ");
	scanf("%c",&alp);
	
	//checking whether an aphabet is a consonant or vowel
	if((alp=='a')||(alp=='e')||(alp=='i')||(alp=='o')||(alp=='u'))
	{
		printf("It is a vowel.");
	}
	else
		printf("It is a consonant.");
		
	return 0;
}
