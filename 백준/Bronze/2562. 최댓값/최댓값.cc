#include<stdio.h>
int main(void)
{
    int i,v,w;
    int arr[9];
    for(i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
    }
    v = arr[0];
    w = 0;
    for(i = 0; i < 9; i++)
    {
        if(arr[i] > v)
        {
            v = arr[i];
            w = i;
        }
    }

    printf("%d\n", v);
    printf("%d\n", w+1);
    return 0;
}
