//program to copy a file in another name
#include<stdio.h>
#include<stdlib.h>

int main()
{
   char ch;// source_file[20], target_file[20];
   FILE *f1, *f2;
   f1 = fopen("hello.txt", "r");
   f2 = fopen("nishan.txt", "w");
   if (f1 == NULL) {
      printf("Press any key to exit...\n");
      exit(1);
   }
   f2 = fopen("nishan.txt", "w");
   if (f2 == NULL) {
      fclose(f1);
      printf("Press any key to exit...\n");
      exit(1);
   }
   while ((ch = fgetc(f1)) != EOF)
      fputc(ch, f2);
   printf("File copied successfully.\n");
   fclose(f1);
   fclose(f2);
   return 0;
}
	
