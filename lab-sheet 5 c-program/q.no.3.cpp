2//program to store n elements ina n array and print the elements using pointers
#include<stdio.h>
int main()
{
	int a[100],size,i,*ptr;
	printf("Enter the size of an array : ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter %d element : ",i);
		scanf("%d",&a[i]);
	}
	ptr=a; //name of array provides base of array
	printf("\nThe elements in an array are : ");
	for(i=0;i<size;i++)
	{
		printf("%d   ",*ptr);
		ptr++;
	}
	return 0;
}
