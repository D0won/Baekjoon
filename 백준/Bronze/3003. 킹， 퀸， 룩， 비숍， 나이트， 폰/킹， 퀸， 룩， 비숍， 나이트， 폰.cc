#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int Whi[6] = { 1, 1, 2, 2, 2, 8 };
	int arr[6];
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", Whi[i] - arr[i]);
	}
	return 0;
}