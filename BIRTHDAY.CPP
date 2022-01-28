#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,i,mx,my,x,x1,x2,x3,mx1,my1;
initgraph(&gd,&gm,"..\\bgi");

//For First layer
for(i=0;i<=30;i++)
{
setcolor(RED);
ellipse(300,300-i,0,360,170,50);
x=300-i;
delay(50);
}

//For First line
for(i=0;i<=30;i++)
{
setcolor(YELLOW);
ellipse(300,x,0,360,170-3*i/2,50-i/2);
mx=170-3*i/2; my=50-i/2;
}

//For Second layer
for(i=0;i<=30;i++)
{
setcolor(RED);
ellipse(300,x-i,0,360,mx,my);
x1=x-i;
delay(100);
}

//For Second Line
for(i=0;i<=30;i++)
{
setcolor(YELLOW);
ellipse(300,x1,0,360,mx-2*i/2,my-i/2);
mx1=170-2*i;my1=50-i/2;
}

//For Third Layer
for(i=0;i<=30;i++)
{
setcolor(RED);
ellipse(300,x1-i,0,360,mx1-10,my1-10);
x2=x1-i;
delay(100);
}

//For Third Line
for(i=0;i<=30;i++)
{
setcolor(YELLOW);
ellipse(300,x2,0,360,(mx1-10)-3*i,my-5-i);
}

//For Candle
for(i=0;i<=50;i++)
{
setcolor(WHITE);
circle(300,x2-i,10);
x3=x2-i;
delay(100);
}

for(i=0;i<=30;i++)
{
setcolor(RED);
ellipse(300,x3-15,0,360,6-i/2,15-i);
}

getch();
closegraph();
}
