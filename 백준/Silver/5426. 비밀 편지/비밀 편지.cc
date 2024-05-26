#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    while(T--)
    {
        string a;
        cin >> a;
        int len = sqrt(a.length());
        for(int i = 0; i < len; i++)
        {
            for(int j = 0; j < len; j++)
            {
                cout << a[(len-1)-i+len*j];
            }
        }
        cout << "\n";
    }
    return 0;
}