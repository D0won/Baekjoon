#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, five = 0, min = INT_MAX;
    cin >> N;
    for(int i = 0; i <=N/5; i++)
    {
        for(int j = 0; j <= N/3; j++)
        {
            if(5 * i + 3 * j == N)
            {
                if(min > i+j)
                    min = i+j;
            }
        }
    }

    if(min == INT_MAX)
        cout << "-1";
    else
        cout << min;
    
    return 0;
}