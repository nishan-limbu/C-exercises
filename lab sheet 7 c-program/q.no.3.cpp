#include <graphics.h>
#include <conio.h>
 
main()
{
   int gd = DETECT,gm;
	initgraph(&gd,&gm,"C:\\tc\\bgi\\");
	line(100,100,300,100);
	closegraph();
	return 0;
}
