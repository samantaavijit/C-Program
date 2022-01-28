#include<stdio.h>
#include<conio.h>
//#include<graphics.h>
void main()
{
    int gd=DETECT,gm,a,b;
    initgraph(&gd,&gm,"");
    a=getmaxx();
    b=getmaxy();
    printf("x=%d y=%d",a,b);
    getch();
    closegraph();
}
