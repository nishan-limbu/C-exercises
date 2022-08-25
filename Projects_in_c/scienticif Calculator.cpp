//program for a scientific calculator
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void loading(void);
void mainmenu(void);
void addition();
void subtraction();
void multiplication();
void division();
void matrix_operation();
void matrix_addition();
void matrix_subtraction();
void Other_Different_Operations();
void cube();
void square();
void squareRoot_CubeRoot();
void modulus();
void factorization();
void power();

int main()
{
	int userchoice;
	int choice1,choice4;
	mainmenu();
	loading();
	printf("\n");
	while(1)
	{
		//assigning the number to perform different operations from the user
		printf("\tChoose Any Number for Different Operations from the above : "); 
		scanf("%d",&userchoice);
		printf("\n");
		
		//using switch case for different operations to be performed
		switch(userchoice)
		{
				
				case 1:
						addition();
						break;
				case 2:
						subtraction();
						break;
				case 3:
						multiplication();
						break;
				case 4:
						division();
						break;
				case 5:
						loading();
						printf("\n");
						matrix_operation();
						while(1)
						{
							//assigning the number to perform different operations from the user
							printf("\tChoose Any Number for Different Operations from the above : "); 
							scanf("%d",&choice1);
							switch(choice1)
							{
								case 1:
										matrix_addition();
										break;
								case 2:
										matrix_subtraction();
										break;
								case 7:
										exit(0);
								default:
										printf("\t                Invalid!!\n");
										printf("\tPlease choose the number only from Menu-Driven");	
										break;
							}
						}
					
				case 8:	
						loading();
						printf("\n");
						Other_Different_Operations();
						while(1)
						{
							//assigning the number to perform different operations from the user
							printf("\tChoose Any Number for Different Operations from the above : "); 
							scanf("%d",&choice4);
							switch(choice4)
							{
								case 1:
										cube();
										break;
								case 2:
										square();
										break;
								case 3:
										squareRoot_CubeRoot();
										break;
								case 4:
										modulus();
										break;
								case 5:
										factorization();
										break;
								case 6:
										power();
										break;
								
								case 7:
										exit(0);
								default:
										printf("\t                Invalid!!\n");
										printf("\tPlease choose the number only from Menu-Driven");	
										break;
							}	
				 		}
						
				case 9:
						exit(0);							
				default:
						printf("\t                Invalid!!\n");
						printf("\tPlease choose the number only from Menu-Driven");
						printf("\n");	
						break;
			printf("\n");
		}
	}
	return 0;	

}

void loading(void)
{
	int load;
	//using for-loop for showing the loading from 1 to 100 %
	for(load=0;load<=50000;load++)
	{
		printf("\r\tloading :...%d per.",load/500);
	}
	printf("\n");
}

void mainmenu(void)
{
	//printing the menu-driven of scientific calculator
	printf("                                        Scientific Calculator\n");
	printf("                                           < Menu-Driven >                                          \n");
	printf("`````````````````````````````````````````````````````````````````````````````````````````````````````````````\n");
	printf("\t1.Addition                                                  7.Conversion:\n");
	printf("\t2.Subtraction                                                 7.1.Convversion: Degree to Radian\n");
	printf("\t3.Multiplication                                              7.2.Conversion: Degree to Grade\n");
	printf("\t4.Division                                                    7.3.Conversion: Radian to Degree\n");
	printf("\t5.Matrix Operations:                                          7.4.Conversion: Radian to Grade\n");
	printf("\t  5.1.Matrix Addition                                         7.5.Conversion: Grade to Degree\n");
	printf("\t  5.2.Matrix Subtraction                                      7.6.Conversion: Grade to Radian\n");
	printf("\t  5.3.Matrix Multiplication                                 8.Other Different Operations:\n");
	printf("\t  5.4.Matrox Division                                         8.1.Cube of a Number\n");
	printf("\t6.Complex Number Operations:                                  8.2.Square of a Number\n");
	printf("\t  6.1.Addition of Complex Number                              8.3.Square Root & Cube Root of a Number\n");
	printf("\t  6.2.Subtraction of Complex Number                           8.4.Modulus of a Number\n");
	printf("\t  6.3.Multiplication of Complex Number                        8.5.Factorization\n");
	printf("\t  6.4.Division of Complex Number                              8.6.Power\n");
	printf("\n");
	printf("\t                                            9:Exit\n");
	printf("`````````````````````````````````````````````````````````````````````````````````````````````````````````````\n");

}
void addition()
{
	int a,b;
	printf("\tEnter the two numbers for Addition : \n");
	printf("\ta : ");
	scanf("%d",&a);
	printf("\tb : ");
	scanf("%d",&b);
	printf("\tAddition = %d\n",a+b);
	printf("\n");
	printf("`````````````````````````````````````````````````````````````````````````````````````````````````````````````\n");
}
void subtraction()
{
	int a,b;
	printf("\tEnter the two numbers for Subtraction : \n");
	printf("\ta : ");
	scanf("%d",&a);
	printf("\tb : ");
	scanf("%d",&b);
	printf("\tSubtraction = %d\n",a-b);
	printf("\n");
	printf("`````````````````````````````````````````````````````````````````````````````````````````````````````````````\n");
}
void multiplication()
{
	int a,b;
	printf("\tEnter the two numbers for Multiplication: \n");
	printf("\ta : ");
	scanf("%d",&a);
	printf("\tb : ");
	scanf("%d",&b);
	printf("\tMultiplication = %d\n",a*b);
	printf("\n");
	printf("`````````````````````````````````````````````````````````````````````````````````````````````````````````````\n");
}
void division()
{
	float a,b;
	printf("\tEnter the two numbers for Division : \n");
	printf("\ta : ");
	scanf("%f",&a);
	printf("\tb : ");
	scanf("%f",&b);
	printf("\tDivision = %0.2f\n",a/b);
	printf("\n");
	printf("`````````````````````````````````````````````````````````````````````````````````````````````````````````````\n");
}
void matrix_operation()
{
	printf("                                           < Menu-Driven >                                          \n");
	printf("`````````````````````````````````````````````````````````````````````````````````````````````````````````````\n");
	printf("\t1.Matrix Addition\n");
	printf("\t2.Matrix Subtraction\n");
	printf("\t3.Matrix Multiplication\n");
	printf("\t4.Matrix Dividion\n");
	printf("\n");
	printf("                                             7:Exit\n");
	printf("`````````````````````````````````````````````````````````````````````````````````````````````````````````````\n");
	printf("\n");
}
void matrix_addition()
{
	//program for addition of two Matrixes of same size.

	int a[3][3],b[3][3],c[3][3],i,j;
	//Assigning the element of A matrix
	printf("\tEnter the element of A matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("\t%d",&a[i][j]);
		}
	}
	//Assigning the element of B matrix

	printf("\t\nEnter the element of B matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("\t%d",&b[i][j]);
		}
	}
	
	
	//output of A matrices
	printf("\n\tMatrix A = \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d  ",a[i][j]);
		}
		printf("\n");
	}
	//output of B matrices
	printf("\n\tMatrix B = \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d  ",b[i][j]);
		}
		printf("\n");
	}
	
	//using for loop for addition of A and B matrices
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n\tAddition of A and B matrices = \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d  ",c[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("`````````````````````````````````````````````````````````````````````````````````````````````````````````````\n");
}
void matrix_subtraction()
{
	//program for subtraction of two Matrixes of same size.

	int a[3][3],b[3][3],c[3][3],i,j;
	//Assigning the element of A matrix
	printf("\tEnter the element of A matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//Assigning the element of B matrix
	printf("\n\tEnter the element of B matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	//output of A matrices
	printf("\n\tMatrix A = \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d  ",a[i][j]);
		}
		printf("\n");
	}
	//output of B matrices
	printf("\n\tMatrix B = \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d  ",b[i][j]);
		}
		printf("\n");
	}
	
	//using for loop for subtraction of A and B matrices
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("\n\tSubtraction of A and B matrices = \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d  ",c[i][j]);
		}
		printf("\n");
	}
}
void Other_Different_Operations()
{
	printf("                                           < Menu-Driven >                                          \n");
	printf("`````````````````````````````````````````````````````````````````````````````````````````````````````````````\n");
	printf("\t1.Cube of a Number\n");
	printf("\t2.Square of a Number\n");
	printf("\t3.Square Root & Cube Root of a Number\n");
	printf("\t4.Modulus of a Number\n");
	printf("\t5.Factorization\n");
	printf("\t6.Power\n");
	printf("\n");
	printf("                                             7:Exit\n");
	printf("`````````````````````````````````````````````````````````````````````````````````````````````````````````````\n");
	printf("\n");
}



void cube()
{
	int a;
	printf("\tEnter the number for a Cube : \n");
	printf("\ta : ");
	scanf("%d",&a);
	printf("\tCube of %d = %d\n",a,a*a*a);
	printf("\n");
	printf("`````````````````````````````````````````````````````````````````````````````````````````````````````````````\n");
}
void square()
{
	int a;
	printf("\tEnter the number for a Square : \n");
	printf("\ta : ");
	scanf("%d",&a);
	printf("\tSquare of %d = %d\n",a,a*a);
	printf("\n");
	printf("`````````````````````````````````````````````````````````````````````````````````````````````````````````````\n");
}
void squareRoot_CubeRoot()
{
	int choice5;
	double a;
	double b;

	//printing the menu-driven of scientific calculator
	printf("                                           < Menu-Driven >                                          \n");
	printf("`````````````````````````````````````````````````````````````````````````````````````````````````````````````\n");
	printf("\t1.Square Root of the Number\n");
	printf("\t2.Cube Root of the Number\n");
	printf("\t                                           3:Exit\n");
	printf("`````````````````````````````````````````````````````````````````````````````````````````````````````````````\n");
	printf("\n");
	while(1)
	{
		//assigning the number to perform different operations from the user
		printf("\tChoose Any Number for Different Operations from the above : "); 
		scanf("%d",&choice5);
		printf("\n");
		
		//using switch case for different operations to be performed
		if(choice5==0)
		{
			exit(0);
		}
		else if (choice5==1)
		{
			printf("\tEnter the number for a Square Root: \n");
			printf("\ta : ");
			scanf("%lf",&a);
			printf("\tSquare Root of %0.2lf = %0.2lf\n",a,sqrt(a));
			printf("\n");
			printf("`````````````````````````````````````````````````````````````````````````````````````````````````````````````\n");	
		}
		else if(choice5==2)
		{
			printf("\tEnter the number for a Cube Root : \n");
			printf("\tb : ");
			scanf("%lf",&b);
			printf("\tCube Root of %0.2lf = %0.2lf\n",b,cbrt(b));
			printf("\n");
			printf("`````````````````````````````````````````````````````````````````````````````````````````````````````````````\n");
		}
		else
		{
			printf("\t                Invalid!!\n");
			printf("\tPlease choose the number only from Menu-Driven");
			printf("\n");
		}
		printf("\n");
	}
}
void modulus()

{
	int a,b;
	printf("\tEnter the two numbers \n");
	printf("\ta : ");
	scanf("%d",&a);
	printf("\tb : ");
	scanf("%d",&b);
	printf("\tModulus of %d and %d = %d",a,b,a%b);
	printf("\n");
	printf("`````````````````````````````````````````````````````````````````````````````````````````````````````````````\n");
}
void factorization()
{
	int n, i;
	int factorial=1;
	printf("\tEnter the number for factorization : ");
	scanf("%d",&n);
	//using loop
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	printf("\tThe factorizztion of %d = %d",n,factorial);
	printf("\n");
	printf("`````````````````````````````````````````````````````````````````````````````````````````````````````````````\n");
}
void power()
{
	double b, p;
	printf("\tEnter the base : ");
	scanf("%lf",&b);
	printf("\tEnter the power : ");
	scanf("%lf",&p);
	printf("\tPower = %0.2lf",pow(b,p));
	printf("\n");
	printf("`````````````````````````````````````````````````````````````````````````````````````````````````````````````\n");
}
