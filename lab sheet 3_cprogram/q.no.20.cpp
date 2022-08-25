//program to find the second largest element in an array
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[50];
	int size,i,largest,second_lar;
	//assigning the input from the user
	printf("Enter the size of an array : ");
	scanf("%d",&size);
	printf("\nEnter the elements : \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	largest=second_lar=INT_MIN;
	for(i=0;i<size;i++)
	{
		if(a[i]>largest) //this code is for finding largest number
		{
			second_lar=largest;
			largest=a[i];
		}
		if(a[i]>second_lar) //this code is for finding second largest number
		{
			second_lar=a[i];
		}
	}
	printf("\nSecond largest Element = %d",second_lar);
	return 0;
}
