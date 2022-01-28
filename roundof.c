#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
    int n,num_int;
    float num,diff,temp,res;
    printf("\nEnter the Float Number and Nth decimal place ");
    scanf("%f%d",&num,&n);
    temp=num*pow(10,n);
    num_int=(int)temp;
    diff=temp-(float)num_int;
    if(diff>=0.5)
    {
        res=(float)(num_int+1);
        res=res/pow(10,n);
    }
    else
    {
        res=(float)(num_int/pow(10,n));
    }
    printf("\nRound off = %f",res);
    getch();
}
