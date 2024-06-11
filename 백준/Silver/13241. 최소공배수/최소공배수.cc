#include<bits/stdc++.h>
using namespace std;

int  CommonMultiple(long long int A, long long int B)
{
    int min = 0;
    while(1)
    {

        if(A % B == 0)
        {
            min = B;
            break;
        }
        else
        {
            int temp = A % B;
            A = B;
            B = temp;
        }
    }
    return min;
}

int main(void)
{
    cin.tie(0)->sync_with_stdio(0);
   
    long long int A,B;
    cin >> A >> B;
    long long int min = CommonMultiple((A > B ? A : B),(A > B ? B : A));
    cout << (A * B) / min << '\n';

    return 0;
}