//program to print the array elements using recursion
#include<stdio.h>
void array(int str[],int k, int n); //function declaration
int main()
{
	int str[100];
	int num,i;
	printf("Enter the size of the array: ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("\nEnter %d element: ",i);
		scanf("%d",&str[i]);
	}
	//printfing the array recursively
	printf("Elements in the array : ");
	array(str,0,num);
}

void array(int str[],int k, int n)
{
	//recursion base condition
	if(k>=n)
		return;
	//printing the current array element

	printf("%5d",str[k]);
	//recursively call array to print next element in an array
	array(str,k+1,n);
}
