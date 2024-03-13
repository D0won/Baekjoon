#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
    int N; cin >> N;
    int d = 2, dot;
    for(int i = 0; i < N; i++)
    {
        d  =  d + (d-1);
    }    
    dot = pow(d, 2);
    cout << dot;
    return 0;
}