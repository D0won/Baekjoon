#include<stdio.h>
int main(void)
{
    int arr[100] = {0};
    int n,m,i,j,a,b,tmp;
    scanf("%d %d", &n, &m);

    for(i = 0; i < n; i++)
    {
        arr[i] = i;
    }
    for(i = 0; i < m; i++)
    {
        scanf("%d %d", &a, &b);
        tmp = arr[a-1];
        arr[a-1] = arr[b-1];
        arr[b-1] = tmp;
    }
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]+1);
    }

    return 0;
}
