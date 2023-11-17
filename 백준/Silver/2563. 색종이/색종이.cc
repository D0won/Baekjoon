#include<stdio.h>
#pragma warning(disable:4996)
#include<string.h>

int main(void)
{
	int square[100][100] = {0};
	int P;
	scanf("%d", &P);
	for (int p = 0; p < P; p++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		for (int i = a; i < a + 10; i++)
		{
			for (int j = b; j < b + 10; j++)
			{
				square[i][j] = 1;
			}
		}
	}
	int black = 0;  
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (square[i][j] == 1)
				black++;
		}
	}
	printf("%d\n", black);
}