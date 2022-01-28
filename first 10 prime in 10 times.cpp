#include<stdio.h>
#include<conio.h>
int firstprime(int n)
{
	int i=1,j,count=0,b=0,a[n],k=0;
	
		for(i=i+1;i>0;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				b=1;
				break;
			}
		}
		if(b==0)
		{
			a[k]=i;
			k++;
			count++;
		}
		b=0;
	if(count==n)
		{
			break;
		}
	}
}
int main()
{
	int n,r;
	printf("Enter the limit that you want ");
	scanf("%d",&n);

	r=primefirst(n);
	printf("\nRESULT IS %d",r);
	return(0);
}
