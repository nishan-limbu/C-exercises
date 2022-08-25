/*program to enter marks of 5 students in chemistry,mathematics and physics(each out of 100) and
 having elements roll no,name,chem_marks,math_marks and phy_marks and display percentage of each students
 by using structure
*/
#include<stdio.h>
struct students
{
	int roll_no;
	char name[50];
	float chem_marks;
	float math_marks;
	float phy_marks;
};
int main()
{
	struct students s[5];
	int i;
	printf("Students record : \n");	
	for(i=0;i<5;i++)
	{
		printf("\nStudent-%d",i);
		printf("\nRoll no. : ",i);
		scanf("%d",&s[i].roll_no);
		printf("\nName : ",i);
		scanf("%s",&s[i].name);
		printf("\nMarks in Chemistry : ",i);
		scanf("%f",&s[i].chem_marks);
		printf("\nMarks in Mathematic : ",i);
		scanf("%f",&s[i].math_marks);
		printf("\nMarks in Physic : ",i);
		scanf("%f",&s[i].phy_marks);
		printf("\n");
		printf("..........................................");
	}	
	printf("\nPercentage of each students :\n");
	for(i=0;i<5;i++)
	{
		printf("Student %d",i);
		float percentage=(s[i].chem_marks+s[i].math_marks+s[i].phy_marks)/3.0;
		printf("\nPercentage = %.2f\n\n",percentage);
	}
	return 0;
}
