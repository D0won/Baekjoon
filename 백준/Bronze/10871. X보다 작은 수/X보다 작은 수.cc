#include<stdio.h>
int main(void)
{
    int n,i,v;
    int arr[10000] = {0};
    scanf("%d %d", &n, &v);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(v > arr[i])
            printf("%d ", arr[i]);
    }

    return 0;
}
