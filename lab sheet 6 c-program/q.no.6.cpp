//program to delete a specific line from a file
#include<stdio.h>
#include<string.h>
#define L 256
int main()
{
	int rn,k=0;
	char doname[L];
	char hr;
    FILE *fpdo1, *fpdo2;
    char datastr[L],temp[]="personal.txt";
    printf("Enter file name : ");
    scanf("%d", &doname);
    fpdo1 = fopen(doname,"r");
	
    if(!fpdo1) 
	{
		printf("File not found\n");
		return 0;
	}
	 fpdo2 = fopen(temp,"w");
	 if(!fpdo2)
	 {
	 	printf("Error in creating a temporary file.\n");
	 	fclose(fpdo1);
	 	return 0;
	 }
	 printf("Enter line to be removed : ");
	 scanf("%d",&rn);
	rn++;
    while(!feof(fpdo1))
	{
		strcpy(datastr,"\0");
		fgets(datastr,L,fpdo1);
      	if(!feof(fpdo1))
	 	{
	  		k++;
	  		if(k!=rn)
	  		{
	  			fprintf(fpdo2,"%s",datastr);
			}
	 	}
	
        
    }
    fclose(fpdo1);
    fclose(fpdo2);
    remove(doname);
    fpdo1=fopen(doname,"r");
    hr=fgetc(fpdo1);
    printf("Content of %s is :\n",doname);
    while(hr!=EOF)
    {
    	printf("%s",hr);
    	hr=fgetc(fpdo1);
	}
    fclose(fpdo1);
	return 0;
}
