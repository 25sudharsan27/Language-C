#include <stdio.h>

int main()
{
    int a[100],i,n;
    printf("Enter number to add into array: ");
    scanf("%d",n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered values of array:\n");
    for (i=0;i<=n;i++);
    {
        printf("%d\n",a[i]);
    }
}