#include<stdio.h>
#pragma warning(disable:4996)
#include<math.h>

int main(void)
{
	int N, B, i;
	int arr[30];
	scanf("%d %d", &N, &B);
	for (i = 0; N != 0; i++)
	{
		arr[i] = N % B;
		N /= B;
	}

	for (int j = i-1; j >= 0; j--)
	{
		if (arr[j] >= 10)
			printf("%c", arr[j] - 10 + 'A');
		else
			printf("%d", arr[j]);
	}
}