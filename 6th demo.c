#include<conio.h>
#include<stdio.h>
//int lcm(int ,int);
void main()
{
    int n,i,ar[100],a=1,j,k;
    printf("Enter the limit ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the value ");
        scanf("%d",&ar[i]);
        a=a*ar[i];
    }
    for(j=1;j<=a;j++)
    {
        for(k=0;k<n;k++)
        {
            if(j%ar[k]!=0)
            {
                break;
            }
        }
        if(k<n-1)
            break;
    }

    printf("Result is %d",j);
    getch();
}
/*int lcm(int l,int a)
{
    int b;
    for(b=l>a?l:a;b<=l*a;b=b+l>a?l:a)
    {
        if(l%b==0&&a%b==0)
        {
            break;
        }
    }
    return(b);
}*/
