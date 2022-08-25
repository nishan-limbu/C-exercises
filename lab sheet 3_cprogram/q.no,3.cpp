//program to count a total number of duplicate elements in an array
#include<stdio.h>
int main()
{
	int a[10];
	int i,j,count=0,n;
	
	printf("\nEnter the length of an array: ");
	scanf("%d",&n);
	
	printf("\nEnter %d elements of an array : \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				break;
			}
		}
	}
	printf("\nTotal number of duplicate elements in this array = %d",count);
	return 0;
}
