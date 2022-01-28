#include<stdio.h>
#include<conio.h>
void main()
{
    char a[30],b[30];
    int x;
    printf("Enter two string\n");
    gets(a);
    gets(b);
    x=strcmp(a,b);
    printf("%d",x);

    getch();
}
