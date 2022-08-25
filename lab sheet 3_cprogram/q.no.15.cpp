//program to compare two stirngs without using string library functions.
#include<stdio.h>
int main()
{
	char str1[50],str2[50];
	int i,f=0;
	printf("Enter the first string : ");
	scanf("%s",&str1);
	printf("Enter the second string : ");
	scanf("%s",&str2);
	//using for-loop for comparing the first and second string 
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]!=str2[i])
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("\nFirst and Second string are not same.");
	}
	else
	{
		printf("\nFirst and Second string are same.");
	}
	return 0;
}
