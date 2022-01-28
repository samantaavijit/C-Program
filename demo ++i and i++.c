int main()
{
    int a[]={55,56,57},i;
    int *p[]={(int *)a,(int *)a+1,(int *)a+2};
    printf("\nOnly a %d",a);
    printf("\nOnly a+1 %d",a+1);
    printf("\nOnly a+2 %d",a+2);
    printf("\nOnly &a %d",&a);
    printf("\nOnly &a+1 %d",&a+1);
    printf("\nOnly &a+2 %d",&a+2);
    printf("\nOnly p %d",p);
    printf("\nOnly *p %d",*p);

    for(i=0;i<3;i++)
    {
        printf("\na[%d]=%d",i+1,a[i]);
    }

     for(i=0;i<3;i++)
    {
        printf("\np[%d]=%d",i+1,p[i]);
    }

         for(i=0;i<3;i++)
    {
        printf("\n*p[%d]=%d",i+1,*p[i]);
    }
    getch();
}
