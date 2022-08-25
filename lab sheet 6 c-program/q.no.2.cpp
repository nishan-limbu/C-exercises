//program to wirte multiple lines in a text file
#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number of line be written: ");
	scanf("%d",&num);
	char str[25]="test line";//taking an input
	FILE *ptr=NULL;
	ptr=fopen("test.txt","w");//opens the file
	for(int i=1;i<=num;i++)
	{
		fprintf(ptr,"%s %d\n",str,i); //code to print the content in text
	}
	return 0;
}
