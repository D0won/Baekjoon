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
    int A1, B1, A2, B2;
    cin >> A1 >> B1;
    cin >> A2 >> B2;
    int r2= (B1 * B2) / CommonMultiple(B1, B2);
    int r1 = A1*(r2/B1) + A2*(r2/B2);
    
    int p = CommonMultiple(r1, r2);
    cout << r1/p << " " << r2/p <<"\n";
  

    return 0;
}