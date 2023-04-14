#include <stdio.h>
#include<stdlib.h>

int main()
{
    int array[100],n,i;
    scanf("%d",&n);
    for (i=0;i<=n-1;i++)
    {
        scanf("%d",array[i]);   
    }
    for (i=n-1;i<=0;i--)
    {
        printf("%d",array[i]);
    }
    return 0;
}

