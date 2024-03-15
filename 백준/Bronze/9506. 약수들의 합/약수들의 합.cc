#include<iostream>
using namespace std;

int main(void)
{
	while (1)
	{
		int n,sum = 0,z = 0;
		int a[100000] = { 0 };
		cin >> n;
		if (n == -1)
			break;
		for (int i = 1; i <= n / 2; i++)
		{
			if (n % i == 0)
			{
				sum += i;
				a[z++] = i;
			}
		}

		if (sum == n)
		{
			cout << n << " = ";
			for (int i = 0; i < z; i++)
			{
				if (i == z - 1)
					cout << a[i]<<endl;
				else
					cout << a[i] << " + ";
			}
		}
		else
		{
			cout << n << " is NOT perfect.\n";
		}
	}
	return 0;
}