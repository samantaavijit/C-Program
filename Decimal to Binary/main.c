#include <stdio.h>
#include <stdlib.h>
int sum,i,aa,bb,temp[50],j,des,base,a,b,and_operaion[50],or_operation[50],xor_operation[50],con_a=0,con_o=0,con_x=0;
void binary(int n,char x)
{
    sum=0;
    i=1;
    int l=n;
    while(n>0)
    {
        sum=sum+(n%2)*i;
        i *=10;
        n /= 2;
    }
    if(x=='a')
        aa=sum;
    else
        bb=sum;
    printf("\n%d   %d ",l,sum);
}

void compareAnd()
{
    int length=aa>bb?aa:bb,temp_aa=aa,temp_bb=bb;
    j=0;
    while(length>0)
    {
        if(temp_aa%10==1&&temp_bb%10==1)
            temp[j]=1;
        else
            temp[j]=0;
        length /=10;
        temp_aa /=10;
        temp_bb /=10;
        j++;
    }

    des=0;
    base=1;
    for(int i=0;i<j;i++)
    {
        des+=temp[i]*base;
        base *=2;
    }
    and_operaion[con_a]=des;
    con_a++;
}

void compareOr()
{
    int length=aa>bb?aa:bb,temp_aa=aa,temp_bb=bb;
    j=0;
    while(length>0)
    {
        if(temp_aa%10==1||temp_bb%10==1)
            temp[j]=1;
        else
            temp[j]=0;
        length /=10;
        temp_aa /=10;
        temp_bb /=10;
        j++;
    }

    des=0;
    base=1;
    for(int i=0;i<j;i++)
    {
        des+=temp[i]*base;
        base *=2;
    }
    or_operation[con_o]=des;
    con_o++;
}

void compareXor()
{
    int length=aa>bb?aa:bb,temp_aa=aa,temp_bb=bb;
    j=0;
    while(length>0)
    {
        if(temp_aa%10==temp_bb%10)
            temp[j]=0;
        else
            temp[j]=1;
        length /=10;
        temp_aa /=10;
        temp_bb /=10;
        j++;
    }
    des=0;
    base=1;
    for(int i=0;i<j;i++)
    {
        des+=temp[i]*base;
        base *=2;
    }
    xor_operation[con_x]=des;
    con_x++;
}

void compare()
{
    int temp=0;
    for(int i=con_a-1;i>=0;i--)
    {
        if(temp<and_operaion[i]&&and_operaion[i]<b)
            temp=and_operaion[i];
    }
    printf("\nAnd is %d",temp);
    temp=0;
    for(int i=con_o-1;i>=0;i--)
    {
        if(temp<or_operation[i]&&or_operation[i]<b)
            temp=or_operation[i];
    }
    printf(" Or is %d",temp);
    temp=0;
    for(int i=con_x-1;i>=0;i--)
    {
        if(temp<xor_operation[i]&&xor_operation[i]<b)
            temp=xor_operation[i];
    }
    printf(" Xor is %d",temp);
}
int main()
{
    int i,j;
    printf("Enter the 1st Number and 2nd Number ");
    scanf("%d%d",&a,&b);

    for(i=1;i<=b;i++)
    {
        binary(i,'a');
        for(j=i+1;j<=a;j++)
        {
            binary(j,'b');
            compareAnd();
            compareOr();
            compareXor();
        }
    }
    compare();
    return 0;
}
