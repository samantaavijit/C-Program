#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k,sump=0,sumc=0,count=0;
    printf("Enter the limit that you want ");
    scanf("%d",&n);
    for(i=1;i<=50;i++)
    {
        for(j=1;j<=50;j++)
        {
            for(k=1;k<=j*2+1;k++)
            {
                if(i+j<=k)
                    break;
                else
                {
                    if(i+j>k&&i*i+j*j==k*k)
                    {
                    sumc=i+j+k;
                    if(sump<sumc)
                    {
                        sump=sumc;
                        count++;
                        printf("\n%d + %d + %d = %d",i,j,k,sumc);
                    }
                    }
                }
            }
        }
        if(count==n)
            break;
    }
    getch();
}
