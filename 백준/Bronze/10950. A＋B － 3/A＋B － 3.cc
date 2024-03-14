#pragma warning(disable:4996)
#include<stdio.h>
int main(void) {
	int T, a,b;
	scanf("%d", &T);
	for (int t = 0; t < T; t++)
	{
		scanf("%d %d", &a, &b);
		printf("%d \n", a + b);
	}
	return 0;
}