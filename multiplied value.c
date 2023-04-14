#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j,k;
	printf("Enter no of rows of 1st matrix: ");
	scanf("%d",&r1);
	printf("Enter no of columns of 1st matrix: ");
	scanf("%d",&c1);
	printf("Enter no of rows of 2nd matrix: ");
	scanf("%d",&r2);
	printf("Enter no of columns of 2nd matrix: ");
	scanf("%d",&c2);
	if (c1==r2)
	{
		printf("Enter values of matrix 1: \n");
		for (i=0;i<=r1-1;i++)
		{
			for (j=0;j<=c1-1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter values of matrix 2: \n");
		for (i=0;i<=r2-1;i++)
		{
			for (j=0;j<=c2-1;j++)
			{
				scanf("%d",&b[i][j]);
				
			}
		}
		for (i=0;i<=r1-1;i++)
		{
			for (j=0;j<=c2-1;j++)
			{
				c[i][j]=0;
				for(k=0;k<=c1-1;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][i];
				}
			}
		}
		printf("Value of multiplied matrix\n");
		for (i=0;i<=r1-1;i++)
		{
			for (j=0;j<=c2-1;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
		printf("thanking you");
	}
}
