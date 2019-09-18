#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>



int main()
{
    int gDriver = DETECT, gMode;
    initgraph(&gDriver, &gMode, "C:\\TC\\BGI");

    setcolor(8);
    circle(315,240,100);
    circle(315,240,40);
    circle(315,240,25);
    line(215,240,415,240);
    setfillstyle(SOLID_FILL,4);
    floodfill(315,199,8);
    setfillstyle(SOLID_FILL,15);
    floodfill(315,281,8);
    floodfill(315,278,8);
    floodfill(315,263,8);
    floodfill(315,216,8);
    floodfill(315,201,8);
    setcolor(15);
    setbkcolor(4);
    outtextxy(275,165,"Loading.........");
    setbkcolor(0);
    setcolor(14);
    settextstyle(BOLD_FONT,HORIZ_DIR,4);
    outtextxy(70,50,"##Welcome To Poke-World##");
    setcolor(15);

    //settextstyle(DEFAULT_FONT,HORIZ_DIR,1);

    setcolor(8);
    for(float i=0;i<300;i=i+.5)//****************************************
	{
		delay(10);
		//cleardevice();
		line(315,240,315+25*cos(180+i),240+25*sin(180+i));
		line(315,240,315-25*cos(180+i),240-25*sin(180+i));
		circle(315,240,25);

	}//************************************************************
    closegraph();
}
