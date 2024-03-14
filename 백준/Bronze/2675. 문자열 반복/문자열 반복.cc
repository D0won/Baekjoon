#include<stdio.h>
#pragma warning(disable:4996)
#include<string.h>
int main(void)
{
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++)
	{
		int R;
		char S[20];
		scanf("%d", &R);
		scanf("%s", S);
		for (int i = 0; i < strlen(S); i++)
		{
			for (int j = 0; j < R; j++)
			{
				printf("%c", S[i]);
			}
		}
		printf("\n");
	}
}