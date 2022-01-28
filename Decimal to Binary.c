#include<conio.h>
#include<stdio.h>
void main()
{
    int n,a[100],i=0,j;
    printf("Enter the Decimal value ");
    scanf("%d",n);
    while(n!=0)
    {
        a[i]=n%2;
        n=n/2;
        i++;
    }
    printf("Binary value is ");
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    getch();
}
