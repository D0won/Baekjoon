#include<stdio.h>
int main(void)
{
    int n,i,v,c = 0;
    int arr[100] = {0};
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &v);
    
    for(i = 0; i < n; i++)
    {
        if(arr[i] == v)
            c++;
    }
    printf("%d", c);
    return 0;
}
