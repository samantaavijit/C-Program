#include<conio.h>
#include<stdio.h>
void sort(int a[], int size);
void main()
{
    int a[100],n,i;
    printf("Enter the limit ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the value ");
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("\nSORT ARRAY IS\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    getch();
}
void sort(int a[], int size)
{
    int maxIndex,temp,i,max;
    if(size>1)
    {
        max=a[0];
        maxIndex=0;
        for(i=1;i<size;i++)
        {
            if(max<a[i])
            {
                max=a[i];
                maxIndex=i;
            }
        }
        temp=a[size-1];
        a[size-1]=a[maxIndex];
        a[maxIndex]=temp;
        sort(a,size-1);
    }
}
