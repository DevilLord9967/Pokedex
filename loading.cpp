#include<graphics.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int gdriver=DETECT;
int gmode,errorno;
int right=10;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
errorno=graphresult();
if(errorno!=0)
{
std::cout<<"\n cannot initialise to graphics mode";
getch();
exit(1);
}
rectangle(100,150,550,170);
outtextxy(248,180,"Initiating Pokedex.....");
setfillstyle(SOLID_FILL,BLUE);
while(right <=450)
{
bar(101,151,99+right,169);
right+=5;
delay(50);
}
delay(2000);
closegraph();
return 0;
}
