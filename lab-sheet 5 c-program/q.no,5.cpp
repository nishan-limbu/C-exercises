//program to sort an array using pointers
#include<stdio.h>
int main()
{
	int x[10],i,j,n,temp,*ptr;
	printf("Enter size of an array : ");
	scanf("%d",&n);
	ptr=x;//base address of the array x is stored in pointer(ptr).
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter element-%d : ",i);
		scanf("%d",(ptr+i));
	}
	//sorting array in descending order
	//for(i=0;i<n-1;i++)
	//{
		//for(j=i+1;j<n;j++)
		//{
		//	if(*(ptr+j)>*(ptr+i))
		//	{
		//		temp=*(ptr+j);
		//		*(ptr+j)=*(ptr+i);
		//		*(ptr+i)=temp;
		//	}
		//}
	//}
	//printf("Sorted array :\n");
	//for(i=0;i<n;i++)
	//{
	//	printf("%d ",*(ptr+i));
	//}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(ptr+j)<*(ptr+i))
			{
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}
	printf("\nSorted element in an array :\n");//sorting array in ascending order
	for(i=0;i<n;i++)
	{
		printf("%3d",*(ptr+9));
	}
	return 0;
}
