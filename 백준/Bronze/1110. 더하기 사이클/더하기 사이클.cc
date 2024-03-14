#include<stdio.h>
#pragma warning(disable:4996)
#include<string.h>
int main(void)
{
		int N,M,n,m,i = 0;
		scanf("%d", &N);
		M = N;
		while (1) {
			n = M/ 10;
			m = M % 10;
			if ((m + n) < 10)
			{
				M = (m * 10) + (m + n);
			}
			else
			{
				M = (m + n)%10 + (m * 10);
			}
			i++;
			if (N == M)
				break;
		}
		printf("%d \n", i);
	return 0;
}