//program to copy the elements of one array into another array
#include<stdio.h>

int main()
{
	int a[25],b[25];
	int i,n;
	//assingning the length of an array from the user
	printf("Enter the length of an array : ");
	scanf("%d",&n);
	//using the for loop
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	
	for(i=0;i<n;i++)
	{
		printf("b[%d] = %d ,",i,b[i]);
	}
	
	return 0;
}
