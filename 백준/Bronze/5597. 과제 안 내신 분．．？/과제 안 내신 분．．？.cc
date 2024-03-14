#include<stdio.h>
int main(void)
{
    int arr[30] = {0};
    int i,n;

    for(i = 0; i < 28; i++)
    {
        scanf("%d", &n);
        arr[n-1] = 1;
    }

    for(i = 0; i < 30; i++)
    {
        if(arr[i] == 0)
            printf("%d \n", i+1);
    }
    return 0;
}
