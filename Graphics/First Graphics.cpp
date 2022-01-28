#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
   arc(100,150,300,400,50);
   getch();
    closegraph();
}
