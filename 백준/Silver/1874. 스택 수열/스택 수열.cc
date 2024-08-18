#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int N;
    stack<int> st;
    queue<char> re;
    cin >> N;
    cin.tie(0)->sync_with_stdio(0);
    int n = 1;
    int check = 1;
    for(int i = 0; i < N; i++)
    {
        int num;
        cin >> num;

        while(n <= num) // n이 num보다 작을 경우 바로 넘어감.
        {
            st.push(n);
            re.push('+');
            n++;
        }

        if(st.top() == num)
        {
            st.pop();
            re.push('-');
        }
        else
        {
            cout << "NO\n";
            check = 0;
            break;
        }

    }
    if(check == 1)
    {
        while(!re.empty())
        {
                cout << re.front() << "\n";
                re.pop();
        }
    }
    return 0;
}
