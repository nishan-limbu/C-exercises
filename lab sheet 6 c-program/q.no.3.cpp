//progam to read the file and store the lines into an array
#include<stdio.h>
#include<string.h>
#define M1 130
#define M2 20
int main()
{
	char line[M2][M1];
	char doname[30];
	FILE *fpdo=NULL;
	int k=0;
	int no=0;
	printf("Enter the file name : ");
	scanf("%s",doname);
	fpdo=fopen(doname,"r");
	while(fgets(line[k],M1,fpdo))
	{
		line[k][strlen(line[k])-1]='\0';
		k++;
	}
	no=k;
	printf("%s file has this content :\n",doname);
	for(k=0;k<no;++k)
	{
		printf("%s\n",line[k]);
	}
	printf("\n");
	
	return 0;
}
