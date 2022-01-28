#include<dos.h>
void main()
{
    int h,m,s;
    printf("\n\n\t\t\t\t\t\tStop Watch");
    for(h=0;h<=60;h++)
    {
        for(m=0;m<=60;m++)
        {
            for(s=0;s<=60;s++)
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t%d:%d:%d",h,m,s);
                delay(1000);
            }
        }
    }
    getch();
}
