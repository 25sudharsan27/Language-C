#include <stdio.h>

int main()
{
	a[10][10],b[10][10],i,j,r,c;
	printf("Enter no of rows in matrix: ");
	scanf("%d",&r);
	printf("Enter no of columns in matrix: ");
	scanf("%d",&c);
	for (i=0;i<=r-1;i++)
	{
		for (j=0;j<=c-1;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	printf("Transport of matrix\n");
	for (i=0;i<=r-1;i++)
	{
		for (j=0;j<=c-1;j++)
		{
			printf("%d\t",b[i][j]);
			
		}
		printf("\n");
	}
	
}
