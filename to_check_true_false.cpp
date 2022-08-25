#include<stdio.h>

int main()
{
	int a,b,sum=0;
	
	printf("Input a =");
	scanf("%d",&a);
	printf("Input b =");
	scanf("%d",&b);
	
	sum=a+b;
	if (a==30)
	{
		printf("True",a);
	}
	else if (b==30)
	{
		printf("True",b);
	}
	else if (sum==30)
	{
		printf("True",sum);
	}
	else
	{
		printf("False",a,b,sum);
	}
	return 0;
}
