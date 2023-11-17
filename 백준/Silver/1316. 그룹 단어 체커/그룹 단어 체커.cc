#include<stdio.h>
#pragma warning(disable:4996)
#include<string.h>

int main(void)
{
	int T, count = 0;
	scanf("%d", &T);
	for (int t = 0; t < T; t++)
	{
		char arr[101];
		scanf("%s", arr);
		int len = strlen(arr);
		for (int i = 0; i < len; i++)
		{
			for (int j = i + 1; arr[i] == arr[j]; j++)
			{
				arr[j] = '1';
			}
		}
		int onec = 0;
		for (int i = 0; i < len; i++)
		{
			for (int j = 0; j < len; j++)
			{
				if (arr[i] != '1' && arr[j] != '1')
					if (i != j)
						if (arr[i] == arr[j])
							onec++;
			}
		}
		if (onec == 0)
			count++;
	}
	printf("%d\n", count);
}