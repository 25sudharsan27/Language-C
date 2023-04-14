// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j;
    printf("Enter no of rows for 1st matrix: ");
    scanf("%d",&r1);
    printf("Enter no of columns for 1st matrix: ");
    scanf("%d",&c1);
    printf("Enter no of wos for 2nd matrix: ");
    scanf("%d",&r2);
    printf("Enter no of columns for 2nd matrix: ");
    scanf("%d",&c2);
    if (r1==r2 && c1==c2)
    {
    	printf("Enter values of matrix 1: \n");
		for(i=0;i<=r1-1;i++)
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
			printf("[");
			for (j=0;j<=c2-1;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
				printf("%d\t",c[i][j]);
			}
			printf("]");
			printf("\n");
			}	
	}
    
}
