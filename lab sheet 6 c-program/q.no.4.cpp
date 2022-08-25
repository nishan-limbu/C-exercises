//program to find the number of lines in a text line
#include<stdio.h>
int main()
{
	FILE *fpdo;
	int k=0;
	char doname[40];
	char s;
	//assigning the input from the user
	printf("Enter the file name: ");
	scanf("%s",&doname);
	fpdo=fopen(doname,"r");
	if(fpdo==NULL)
	{
		printf("%s file does exist.",doname);
		return 0;
	}
	for(s=getc(fpdo);s!=EOF;s=getc(fpdo))
	if(s=='\n')
	k=k+1;
	fclose(fpdo);
	printf("%s contains %d lines.\n",doname,k+1);
	return 0;
}
