#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
int main()
{
	int gdriver,gmode,userpattern;
	int x,y,x_max,y_max;
	gdriver=DETECT;
	userpattern=1;
	initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
	setlinestyle(DOTTED_LINE,userpattern,3);
	x=100;
	y=70;
	x_max=350;
	y_max=70;
	line(x,y,x_max,y_max);
	getch();
	closegraph();
	return 0;
}
