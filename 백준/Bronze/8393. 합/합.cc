#pragma warning(disable:4996)
#include<stdio.h>
int main(void) {
	int T, a,b,sum = 0;
	scanf("%d", &T);
	for (int t = 1; t <= T; t++)
	{
		sum += t;
	}
	printf("%d", sum);
	return 0;
}