#include<stdio.h>
#include<Conio.h>
void main()
{
    int n,x;
    float f;
    printf("Enter the number ");
    scanf("%d",&n);
    f=(float)n/2;
    x=n/2;
    if((f-x)==0)
        printf("Even");
    else
        printf("Odd");
    getch();
}
