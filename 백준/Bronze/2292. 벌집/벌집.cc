#include<iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	n -= 1;
	int i = 0, room = 1, m = 0;
	if (n == 0)
	{
		cout << "1" << endl;
	
	}
	else
	{
		while (1)
		{
			if (6 * m < n && n <= 6 * i)
			{
				cout << room << endl;
				break;
			}
			m = i;
			i += room;
			room++;
		}
	}
	return 0;
}