//program to merge two arrays of same size sorted  in descending order
#include<stdio.h>
void merge(int a[],int m,int b[],int n,int c[]);
int main()
{
	int i;
	int a[]={1,3,5,7,9};
	int b[]={2,5,6,8};
	int c[10];
	merge(a,5,b,5,c);
	for(i=0;i<10;i++)
	{
		printf("c[%d] = %d\n",i,c[i]);
	}
	return 0;
}
void merge(int a[],int m,int b[],int n,int c[])
{
	int i=0,j=0,k=0;
	while(i<n && j<m)
	{
		if(a[i]<b[j])
		{
			c[k]=b[j];
			k++;
			j++;
		}
		else
		{
			c[k]=a[i];
			k++;
			i++;
		}
		while(i<n)
		{
			c[k]=a[i];
			k++;
			i++;
		}
		while(j<m)
		{
			c[k]=b[j];
			k++;
			j++;
		}
	}
}
