//program to append multiple lines at the end of a text file.
#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	char doname[20]="output.txt";
	char ch;
	fp1=fopen("nishan.txt","r");
	fp2=fopen("output.txt","w");
	ch=fgetc(fp1);
	while(ch!=EOF)
	{
		fputc(ch,fp2);
		ch=fgetc(fp1);
	}
	printf("Multiple lines are append at the end of %s file.",doname);
	fclose(fp1);
	fclose(fp2);
	return 0;
}
