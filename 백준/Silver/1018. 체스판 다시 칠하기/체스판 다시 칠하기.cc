#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;
    string a[50];
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = INT_MAX;
    for(int i = 0; i < n-7; i++)
    {
        for(int j = 0; j < m-7; j++)
        {
            int wuc = 0, buc = 0,uc = 0, c = 0;
            for(int k = 0; k < 8; k++)
            {
                for(int l = 0; l < 8; l++)
                {
                    
                    if((k % 2 == 0 && l % 2 == 0) || (k % 2 == 1 && l % 2 == 1))
                    {
                        if(a[i+k][j+l] != 'W')
                            wuc++;
                    }
                    else 
                    {
                        if(a[i+k][j+l] != 'B')
                            wuc++;
                    }
    
                    
                    if((k % 2 == 0 && l % 2 == 0) || (k % 2 == 1 && l % 2 == 1))
                    {
                        if(a[i+k][j+l] != 'B')
                            buc++;
                    }
                    else
                    {
                        if(a[i+k][j+l] != 'W')
                            buc++;
                    }
                    
                }
            
            }
            uc = wuc > buc ? buc : wuc;
            if(min > uc)
                min = uc;
        }
    }
    cout << min; 
}