#include<bits/stdc++.h>
using namespace std;

int ConvertSum(string str)
{
    int sum = 0;
    int len = str.length();
    for(int i = 0; i < len; i++)
    {
        if(str[i] == 'I')
        {
            if(i+1 == len)
            {
                sum += 1;
            }
            else
            {
                if(str[i+1] == 'V')
                {
                    sum +=4;
                    i++;
                }
                else if(str[i+1] == 'X')
                {
                    sum +=9;
                    i++;
                }
                else
                {
                    sum +=1;
                }
            }
        }
        else if(str[i] == 'V')
        {
            sum += 5;
        }
        else if(str[i] == 'X')
        {
            if(i+1 == len)
            {
                sum += 10;
            }
            else
            {
                if(str[i+1] == 'L')
                {
                    sum +=40;
                    i++;
                }
                else if(str[i+1] == 'C')
                {
                    sum +=90;
                    i++;
                }
                else
                {
                    sum += 10;
                }
            }
        }
        else if(str[i] == 'L')
        {
            sum += 50;
        }
        else if(str[i] == 'C')
        {
            if(i+1 == len)
            {
                sum += 100;
            }
            else
            {
                if(str[i+1] == 'D')
                {
                    sum +=400;
                    i++;
                }
                else if(str[i+1] == 'M')
                {
                    sum +=900;
                    i++;
                }
                else
                {
                    sum += 100;
                }
            }
        }
        else if(str[i] == 'D')
        {
            sum +=500;
        }
        else
            sum += 1000;
    }
    return sum;
}

void ConvertChar(int sum)
{
    while(1)
    {
        if(sum - 1000 >= 0)
        {
            cout << "M";
            sum -=1000;
        }
        else if(sum - 900 >= 0)
        {
            cout << "CM";
            sum -=900;
        }
        else if(sum - 500 >= 0)
        {
            cout << "D";
            sum -= 500;
        }
        else if(sum - 400 >= 0)
        {
            cout << "CD";
            sum -= 400;
        }
        else if(sum - 100 >= 0)
        {
            cout << "C";
            sum -=100;
        }
        else if(sum - 90 >= 0)
        {
            cout << "XC";
            sum -= 90;
        }
        else if(sum - 50 >= 0)
        {
            cout << "L";
            sum -= 50;
        }
        else if(sum - 40 >= 0)
        {
            cout << "XL";
            sum -=40;
        }
        else if(sum - 10 >= 0)
        {
            cout << "X";
            sum -=10;
        }
        else if(sum - 9 >= 0)
        {
            cout << "IX";
            sum -= 9;
        }
        else if(sum - 5 >= 0)
        {
            cout << "V";
            sum -= 5;
        }
        else if(sum - 4 >= 0)
        {
            cout << "IV";
            sum -= 4;
        }
        else if(sum - 1 >= 0)
        {
            cout << "I";
            sum -= 1;
        }
        else
            break;
    }
}
int main(void)
{
    string a, b;
    cin >> a >> b;
    int sum = ConvertSum(a) + ConvertSum(b);
    cout << sum << "\n";
    ConvertChar(sum);
    return 0;
}