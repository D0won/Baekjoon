#include<iostream>
using namespace std;

int main(void)
{
	int up, down, len;
	cin >> up >> down >> len;

	int day = 1;
	len -= up;


	day += len / (up - down);
	day += (len % (up - down) == 0) ? 0 : 1;

	cout << day << endl;

	return 0;
}