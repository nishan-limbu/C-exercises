//program to convert the string into lowercase
#include<stdio.h>
int main()
{
	char str[50];
	int i;
	printf("Enter the string in Upper-Case : ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)//using this code to covert the sting into lowercase.
		{
			str[i]+=32;
		}
		//using the below code to convet the string into uppercase.
		//if(str[i]>=97 && str[i]<=122)
		//{
		//	str[i]-=32;
		//}
	}
	printf("\nconverted into lowercase : %s",str);
	return 0;
}
