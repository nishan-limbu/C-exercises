//program to count total number of alphabets,digits and special characters in a string
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[50];
	int alp=0,dig=0,sp_char=0,i=0;
	printf("Enter the string : ");
	scanf("%s",&str);
	while(str[i]!=NULL)
	{
	
		if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
		{
			alp++;
			i++;
		}
		else if((str[i]>='0' && str[i]<='9'))
		{
			dig++;
			i++;
		}
		else
		{
			sp_char++;
			i++;
		}
	}
	printf("\nNumber of alphabets in string : %d",alp);
	printf("\nNumber of Digits in string : %d",dig);
	printf("\nNumber of Special Characters in string : %d",sp_char);
	return 0;
}
