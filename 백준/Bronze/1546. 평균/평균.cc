#include<stdio.h>
int main(void)
{
    int arr[1000];
    double a[1000], h, sum = 0;
    int n,i;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    h = arr[0];

    for(i = 0; i < n; i++)
    {
        if(arr[i] > h)
            h = arr[i];
    }

    sum = 0;
    for(i = 0; i < n; i++)
    {
        a[i] = (double)arr[i] / h * 100;
        sum += a[i];
    }
    printf("%g", sum/n);
    return 0;
}
