#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	
	int n, num = 0;
	cin >> n;

	int k = 0;
	for (int i = k; i < k + 10000; i++)
	{
		string str = to_string(i);
		
		if (str.find("666") != string::npos)
		{
			num++;
			if (num == n) {               
				cout << str;
				break;
			}
				
			k = stoi(str);
		}
	}
	return 0;
}