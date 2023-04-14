#include <stdio.h>
int  main()
{
	int a[10][10],r1,c1,i,j,c=0;
	printf("Enter no of rows in 1st matrix: ");
	scanf("%d",&r1);
	printf("Enter no of columns in 1st matrix: ");
	scanf("%d",&c1);

	for (i=0;i<=r1-1;i++)
	{
		for (j=0;j<=c1-1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for (i=0;i<=r1-1;i++)
	{
		for (j=0;j<=c1-1;j++)
		{
			if (i==j)
			{
				c=c+a[i][j];
			}
		}
	}
	printf("sum of diagonal elements: %d",c);
	
}
