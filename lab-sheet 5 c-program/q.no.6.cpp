//program to store and print the roll no., name,age,address and marks of 15 students using structure
#include<stdio.h>
//using the structure
struct students
{
	int roll_no;
	char name[50];
	int age;
	char address[50];
	int marks;
};
int main()
{
	struct students s[15];
	int i;
	printf("Enter the Students record : \n");	
	for(i=0;i<15;i++)
	{
		printf("\nEnter student-%d roll no. : ",i);
		scanf("%d",&s[i].roll_no);
		printf("\nEnter student-%d name : ",i);
		scanf("%s",&s[i].name);
		printf("\nEnter student-%d age : ",i);
		scanf("%d",&s[i].age);
		printf("\nEnter student-%d address : ",i);
		scanf("%s",&s[i].address);
		printf("\nEnter student-%d marks : ",i);
		scanf("%d",&s[i].marks);
		printf("``````````````````````````````````````````````````");
		printf("\n");
	}
	printf("\nRecords of 15 Students :\n");
	for(i=0;i<15;i++)
	{
		printf("\nStudent-%d :",i);
		printf("\nRoll no. : %d",s[i].roll_no);
		printf("\nName : %s",s[i].name);
		printf("\nAge : %d",s[i].age);
		printf("\nAddress : %s",s[i].address);
		printf("\nMarks : %d",s[i].marks);
		printf("``````````````````````````````````````````````````");
		printf("\n");
	}
	return 0;
}
