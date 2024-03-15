#include<iostream>
using namespace std;

int main(void)
{
	int n, sum = 0;
	cin >> n;
	while (n--)
	{
		int x;
		cin >> x;
		int ch = 1;
		if (x == 1)
		{
			
		}
		else
		{
			for (int i = 2; i < x; i++)
			{
				if (x % i == 0)
					ch = 0;
			}
			if (ch == 1)
			sum++;
		}
		
	}
	cout << sum << endl;
	return 0;
}