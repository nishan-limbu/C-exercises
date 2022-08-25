//program for Food Ordering System
#include<stdio.h>
#include<stdlib.h>

//function declaration
void mainmenu();
void loading();


//main function
int main()
{
	int select;
	mainmenu(); //function call
	printf("\n");
	loading();
	printf("\n");
	printf("\tIf you are Hungry.\n");
	while(1)
	{
		printf("\tChoose the above items : ");
		scanf("%d",&select);
		
		return 9;
	}	
}

//following are function definition
void mainmenu() 
{
	printf("\tWelcoe to Nishan Restaurant\n");
	printf("\t...................................................\n");
	printf("\n");
	printf("\t# Food Menu\n");
	printf("\t =>Vegetarian Recipes\n");
	printf("\t\t1.Masala Channa.....................Rs.40\n\t\t2.Paneer Makani Biryani.....................Rs.50\n\t\t3.Gobhi Aloo.....................Rs.30\n\t\t4.Dal-Bhat.....................Rs.60\n\t\t5.Stuffed Masala Mushroom.....................Rs.30\n");
	printf("\t =>Non-Vegetarian Recipes\n");
	printf("\t\t6.Mutton.....................Rs.80\n\t\t7.Pork Fry.....................Rs.60\n\t\t8.chicken Tandoori.....................Rs.50\n\t\t9.Chicken Biryani.....................Rs.60\n\t\t10.Butter Chicken.....................Rs.70\n\t\t11.Chicken Fry.....................Rs.60\n");
	printf("\t# Hot Drinks\n");
	printf("\t =>Tea\n");
	printf("\t\t12.Black Tea.....................Rs.15\n\t\t13.Milk Tea.....................Rs.20\n\t\t14.Green Tea.....................Rs.20\n");
	printf("\t =>Coffee\n");
	printf("\t\t15.Black Coffee.....................Rs.30\n\t\t16.Cappuccino.....................Rs.80\n\t\t17.Italian Coffee.....................Rs.50\n\t\t18.Civet Coffee.....................Rs.40\n");
	printf("\t# Soft Drinks\n");
	printf("\t\t19.Coca-Cola.....................Rs.80\n\t\t20.Pepsi.....................Rs.60\n");
	printf("\t\t21.Fanta.....................Rs.80\n\t\t22.Mountain Dew.....................Rs.75\n");
	printf("\t\t23.Sprite.....................Rs.75\n\t\t24.Tango.....................Rs.70\n");
	printf("\t# Hard Drinks\n");
	printf("\t\t25.Tongba.....................Rs.120\n\t\t26.Gorkha Beer.....................Rs.180\n");
	printf("\t\t27.Nepal Ice.....................Rs.120\n\t\t28.Everst Beer.....................Rs.140\n");
	printf("\t\t29.Carlsberg.....................Rs.195\n\t\t30.Heineken.....................Rs.190\n");
	printf("\n");
	printf("\t\t31.Exit\n");
	printf("\n");
	printf("\t...................................................\n");
}

void loading()
{
	int load;
	for(load=0;load<=10000;load++)
	{
		printf("\r\tloading : %d per.",load/100);
	}
	printf("\n");
}

 
