#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int A, B, C;
    int N;
    int club[1000] = {0};
    cin >> A >> B >> C;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        int a, b, c;
        for(int j = 0; j < 3; j++)
        {
            cin >> a >> b >> c;
            club[i] += a * A + b * B + c * C;
        }
    }

    int max = club[0];
    for(int i = 1; i < N; i++)
    {
        if(club[i] > max)
            max = club[i];
    }
    cout << max;
    return 0;
}