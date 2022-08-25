//program to count a number of words and characters in a file
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int c=0,word=0;
	char ch;
	char doname[40];
	FILE *fp;
	//assigning the input from the user
	printf("Enter the file name: ");
	scanf("%s",&doname);
	fp=fopen(doname,"r");
	if(fp==NULL)
	{
		printf("File Opening Error or File Not Found");
		exit(1);
	}
	while((ch=fgetc(fp))!=EOF)
	{
		c++;
		if(ch==' '||ch=='\n'||ch=='\0')
		{
			word++;
		}
	}
	if(c>0)
	{
		word++;	
	}
	printf("Total Number of characters = %d\n",c);
	printf("Total Number of words = %d\n",word);
	fclose(fp);
	return 0;
}
