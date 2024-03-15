#include<iostream>
using namespace std;

int main(void)
{
	int N, K;
	cin >> N >> K;
	int a = 1,ch = 0;
	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			if (a == K)
			{
				cout << i << endl;
				ch = 1;
			}
			a++;
		}
	}
	if (ch == 0)
		cout << "0" << endl;
	return 0;
}