#include<conio.h>
#include<stdio.h>
int main()
{
    int n,a[5],i,j;
    printf("Enter the Decimal value ");
    scanf("%d",n);
    i=0;
    while(n!=0)
    {
        a[i]=n%2;
        printf("A%d",a[i]);
        n=n/2;
        printf("N%d",n)
        i++;
    }
    printf("Binary value is ");
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    return(0);
}
