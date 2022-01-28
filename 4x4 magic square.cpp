                    // 4x4 MAGIC SQUARE PROGRAM USING C
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[4][4],i,j,n,b;
	printf("\t\t\t4x4 MAGIC SQUARE PROGRAM ");
	printf("\nEnter the first value ");
	scanf("%d",&n);
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			a[i][j]=n;
			n++;
		}
	}
	printf("\nOriginal 4x4 suqare matrix is...\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//4x4 MAGIC SQUARE ALGO
	b=a[0][1];
	a[0][1]=a[3][2];
	a[3][2]=b;

	b=a[0][2];
	a[0][2]=a[3][1];
	a[3][1]=b;

	b=a[1][0];
	a[1][0]=a[2][3];
	a[2][3]=b;

	b=a[2][0];
	a[2][0]=a[1][3];
	a[1][3]=b;

	printf("\n4x4 MAGIC SQUARE IS \n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return(0);
}
