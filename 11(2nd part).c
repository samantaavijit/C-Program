#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("Enter the limit ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=n;k>i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if((i%2!=0&&j%2!=0)||(i%2==0&&j%2==0))
            {
                printf(" *");
            }
        }
        printf("\n");
    }
    getch();
}
