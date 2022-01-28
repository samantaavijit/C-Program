#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int a[16],i,j,temp,countt,br_point=1,c,counter=0;

void check()
{
    int i;

    for(i=0;i<14;i++)
    {
        if(a[i]<=a[i+1])
        {
            br_point=0;
        }
        else
        {
            br_point=1;
            break;
        }
    }

    if(br_point==0)
    {
        printf("Your Total step is %d",counter);
        printf("\a");
    }
}

void show()
{
    system("cls");
    printf("\n\n SHIFT TO RIGHT  --->>  PRESS RIGHT ARROW KEY");
    printf("\t\t\t\tNumber of steps %d",counter);
    printf("\n SHIFT TO LEFT  --->>  PRESS LEFT ARROW KEY");
    printf("\n SHIFT TO UP  --->>  PRESS UP ARROW KEY");
    printf("\n SHIFT TO DOWN  --->>  PRESS DOWN ARROW KEY");

    int n=0;
    printf("\n\n\n");
    for(i=0;i<4;i++)
    {
        printf("\t\t");
        for(j=0;j<4;j++)
        {
            if(a[n]==0)
            {
                printf("\t__");
            }
            else
            {
                printf("\t%d",a[n]);
            }
            n++;
        }
        printf("\n");
    }
    check();

}

int generate_number()
{
    temp=rand()%100;
    for(j=0;j<i;j++)
    {
        if(temp==a[j])
        {
            generate_number();
            break;
        }
    }
    return(temp);
}

void get_input()
{
    int position,tempp,i,tt;

    for(i=0;i<16;i++)
    {
        if(a[i]==0)
        {
            position=i;
            break;
        }
    }
        c=getch();
        if(c==77)   // RIGHT ARROW KEY
        {
            if(position!=15)
            {
                counter++;
                tempp=a[position+1];
                a[position+1]=0;
                a[position]=tempp;
                show();
            }
        }
        if(c==75)    // LEFT ARROW KEY
        {
            if(position!=0)
            {
                counter++;
                tempp=a[position-1];
                a[position-1]=0;
                a[position]=tempp;
                show();
            }

        }
        if(c==72)  // UP ARROW KEY
        {
            if(position==0||position==1||position==2||position==3)
            {}
            else
            {
                counter++;
                tempp=a[position-4];
                a[position-4]=0;
                a[position]=tempp;
                show();
            }

        }
        if(c==80)    // DOWN ARROW KEY
        {
            if(position==12||position==13||position==14||position==15){}
            else
            {
                counter++;
                tempp=a[position+4];
                a[position+4]=0;
                a[position]=tempp;
                show();
            }
        }

}
int main()
{
    system("COLOR 3F");
    int n;
    srand(time(NULL));
    for(i=0;i<15;i++)
    {
        n=generate_number();
        if(n>9&&n<100)
            a[i]=n;
        else
            i--;
    }
    a[15]=0;

    while(br_point)
    {
        show();
        get_input();
    }
    return 0;
}
