#include<stdio.h>
int main(void)
{
    int arr[10] = {0};
    int i,j,m,n,c = 0;

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        arr[i] = n%42;
    }

    for(i = 0; i < 10; i++)
    {
        m = 0;
        for(j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
                m++;
        }
        if(m == 0)
            c++;
    }


    printf("%d", c);
    return 0;
}
