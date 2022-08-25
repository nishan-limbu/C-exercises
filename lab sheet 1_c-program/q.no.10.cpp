//program to find the eligibility of admission for a professional course 
#include<stdio.h>

int main(void)
{
	int phy,che,math,t_a,m_p;
	
	//criteria for the eligibility
	printf("Eligibility criteria :\n");
	printf("Marks in Math >=65\n");
	printf("Marks in Physic >=55\n");
	printf("Marks in Chemistry >=50\n");
	printf("Total in all three subjects >=190\nOR\n");
	printf("Total in Math and Physics >=140");
	
	//assigning the input from the users
	printf("\nMarks obtainded in Physic : ");
	scanf("%d",&phy);
	printf("Marks obtainded in Chemistry : ");
	scanf("%d",&che);	
	printf("Marks obtainded in Mathematic : ");
	scanf("%d",&math);
	printf("Total marks obtained in all three subjects : ");
	scanf("%d",&t_a);
	printf("Total marks obtainded in Math and Physic : ");
	scanf("%d",&m_p);
	
	//checking for eligible or not elligible for an admission
	if( (math>=65)&&(phy>=55)&&(che>=50)&&(((phy+che+math)>=190)||(math+phy)>=140))
	{
			printf("Candidate is eligible for admission.\n");	
	}
	else
			printf("Candidate is not eligible for admission.");
		
}
