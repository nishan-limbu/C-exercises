#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	printf("Graphics is initialize successfully");
	getch();
	closegraph();
	return 0;
	
}
