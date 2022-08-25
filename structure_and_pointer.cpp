/*program to enter id, name and address of 25 students into structure variable called employee 
and sort them in ascending order on the basis of their names with use of pointer*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct employee
{
	int id;
	char name[50];
	char address[50];
}e[5];
int main()
{
	struct employee e[5],temp,*ptr;

	int i,j;
	for(i=0;i<5;i++)
	{
		printf("employee-%d...",i);
		printf("Enter Id:");
		scanf("%d",&e[i].id);
		printf("Name:");
		scanf("%s",&e[i].name);
		printf("Address:");
		scanf("%s",&e[i].address);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(e[i].name>e[j].name)
			{
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
		}
	}
	ptr=&e[i];
	for(i=0;i<5;i++)
	{
		
		printf("Name: %s",ptr->name);
	
	}
	return 0;
}
