#include<stdio.h>
int main(void)
{
    int arr[100];
    int n,m,i,j,a,b, tmp;

    scanf("%d %d", &n, &m);

    for(i = 0; i < n; i++)
    {
        arr[i] = i+1;
    }

    for(i = 0; i < m; i++)
    {
        scanf("%d %d", &a, &b);
        for(j = 0; j < (b-a+1)/2; j++)
        {
            tmp = arr[a+j-1];
            arr[a+j-1] = arr[b-j-1];
            arr[b-j-1] = tmp;
        }
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
