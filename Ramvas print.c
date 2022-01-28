#include<conio.h>
#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the limit ");
    scand("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n-1;j++)
        {
            printf(" ");
        }
        for(k=1;k<=n;k++)
        {
            printf("*");
        }
    }
    return 0;
}
