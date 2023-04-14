#include <stdio.h>

int main(){
	int a[10],n,i;
	printf("Enter number of input you are going to give : ");
	scanf("%d",&n);
	for (i=0;i<=n-1;i++)
	{
		scanf("%d",a[i]);
	}
	print("given array is \n");
	for (i=0;i<=n-1;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
