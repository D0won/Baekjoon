#include<iostream>
using namespace std;

int main(void)
{
	int M, N, sum = 0, min,a = 0;
	cin >> M >> N;
	for (int i = M; i <= N; i++)
	{
		int ch = 1;
		if (i != 1)
		{
			for (int j = 2; j < i; j++)
			{
				if (i % j == 0)
					ch = 0;
			}

			if (ch == 1)
			{
				if (a == 0)
					min = i;
				sum += i;
				a++;
			}
		}
	}
	if (sum == 0)
		cout << "-1" << endl;
	else
		cout << sum << "\n" << min << "\n";
	return 0;
}