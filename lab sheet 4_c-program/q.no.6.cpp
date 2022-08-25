//progrm to print first 50 natural numbers using recursion
#include<stdio.h>
void natural_number(int);
int main()
{
	int total_terms=50;
	
	natural_number(total_terms);
	
	return 0;
}

void natural_number(int num)
{
	if(num)
	{
		natural_number(num-1);
	}
	else
	{
		return;
	}
	printf("%3d",num);
}

