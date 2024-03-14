#pragma warning(disable:4996)
#include <stdio.h>
#include<string.h>

int main(void)
{
	char S[100];
	char c = 'a';
	scanf("%s", S);
	int l = strlen(S);
	int j;
	for (int i = 97; i < 123; i++)
	{
		for (j = 0; j < l; j++)
		{
			if (S[j] == (char)i)
			{
				printf("%d ", j);
				break;
			}
		}
		if (j == l)
			printf("-1 ");
	}
	return 0;
}