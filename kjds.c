#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[30];
    int i,k;
    printf("Enter the String ");
    gets(a);
    k=strlen(a);
    for(i=0;i<k;i++)
    {
        printf("%s",a[i]);
    }
    getch();
}
