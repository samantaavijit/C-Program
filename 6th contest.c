#include<conio.h>
#include<stdio.h>
void main()
{
    int n[20],min,t,i=0,j=0;
    printf("Enter the limit ");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        printf("Enter the value ");
        scanf("%d",&n[i]);
    }
    min=n[0];
    for(i=0;i<t;i++)
    {
        if(n[i]>min)
            min=n[i];
    }
    while(1)
    {
        j=0;
        for(i=0;i<t;i++)
        {
            if(min%n[i]==0)
                j++;
        }
        if(j==i)
        {
            printf("LCM IS %d",min);
            break;
        }
        ++min;
    }
    getch();
}
