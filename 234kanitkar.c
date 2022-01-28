main()
{
    int a[]={0,1,2,3,4};
    int *p[]={a,a+1,a+2,a+3,a+4};
    printf("P=%u",p);
    printf("\n&P=%u",&p);
    printf("\n&P[0]=%u",&p[0]);
    printf("\n&P[1]=%u",&p[1]);
    printf("\n*P=%u",*p);
    printf("\nA=%u",a);
    printf("\nA+1=%u",a+1);
    printf("\n*(A+1)=%u",*(a+1));
    printf("\nP[0]=%u",p[0]);
    printf("\n&A=%u",&a);
    printf("\n*A=%u",*a);

    printf("\n*(*P)=%u",*(*p));
    printf("\nA[0]=%u",a[0]);

    printf("\n\n\n\n\n\n\n");
    int aa[26],i;
    for(i=0;i<26;i++)
    {
        aa[i]='A'+i;
        printf("\n%d%c",aa[i],aa[i]);
    }
}
