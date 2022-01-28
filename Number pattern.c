int main()
{
    int i,j,k,n;
    printf("Enter the limit ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=1;j<=n*2-1;j++)
        {
            if(j>=n+1-i&&j<=n-1+i){
                j<=n?k--:k++;
                printf("%d ",k);
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
