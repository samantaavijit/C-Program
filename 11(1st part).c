 #include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,l,n;
    printf("Enter the limit ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i%2==0&&j%2!=0)||(i%2!=0&&j%2==0))
            {
                printf(" ");
            }
            else
                printf("*");
        }
        for(k=n*2;k>i;k--)
        {
            printf("k");
        }
        for(j=1;j<=i;j++)
        {
            if((i%2!=0&&j%2!=0)||(i%2==0&&j%2==0))
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    /*for(i=n-1;i>=1;i--)
    {
         for(j=1;j<=i;j++)
        {
            if((i%2==0&&j%2!=0)||(i%2!=0&&j%2==0))
            {
                printf(" ");
            }
            else
                printf("*");
        }
        printf("\n");
    }*/
    getch();
}
