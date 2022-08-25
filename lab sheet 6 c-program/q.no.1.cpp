//program to create and store information in a text file.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char datastr[500];
	FILE *fpdo;
	char doname[30]="nishan.txt";
	fpdo=fopen(doname,"w");
	if(fpdo==NULL)
	{
		printf("Error in creating a file.");
		exit(1);	
	}	
	printf("Enter a sentence : ");
	fgets(datastr,sizeof datastr,stdin);
	fprintf(fpdo,"%s",datastr);
	fclose(fpdo);
	printf("\n%s file created successfully.\n",doname);
	return 0;
}
