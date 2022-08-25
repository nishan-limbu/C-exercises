//program to merge two files and write it in a new file.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f1,*f2,*f3;
	char ch;
	f1=fopen("hello.txt","r");
	f2=fopen("nishan.txt","r");
	f3=fopen("merge.txt","w");
	if(f1==NULL||f2==NULL||f3==NULL)
	{
		printf("\nError: Cannot open file");
		exit(1);
	}
	while(1) //copy file hello into file merge
	{
		ch=fgetc(f1);
		if(ch==EOF)
		{
			break;
		}
		fputc(ch,f3);
	}
	fclose(f1);
	while(1) //copy file nishan into file merge
	{
		ch=fgetc(f2);
		if(ch==EOF)
		{
			break;
		}
		fputc(ch,f3);
	}
	printf("Two File merged successfully.\n");
	fclose(f2);
	fclose(f3);
	return 0;
}
