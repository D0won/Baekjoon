#include<stdio.h>
#pragma warning(disable:4996)
#include<string.h>

int main(void)
{
	char arr[101];
	int count = 0;
	scanf("%s", arr);
	int len = strlen(arr);
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == 'c')
		{
			if (arr[i + 1] == '=' || arr[i + 1] == '-')
			{
				i++;
				count++;
				continue;
			}
			else
			{
				count++;
			}
		}
		else if (arr[i] == 'd')
		{
			if (arr[i + 1] == '-')
			{
				i++;
				count++;
				continue;
			}
			else if (arr[i + 1] == 'z')
			{
				if (arr[i + 2] == '=')
				{
					i += 2;
					count++;
					continue;
				}
				else
					count++;
			}
			else
				count++;
		}
		else if (arr[i] == 'n' || arr[i] == 'l')
		{
			if (arr[i + 1] == 'j')
			{
				i++;
				count++;
				continue;
			}
			else
				count++;
		}
		else if (arr[i] == 's' || arr[i] == 'z')
		{
			if (arr[i + 1] == '=')
			{
				i++;
				count++;
				continue;
			}
			else
				count++;
		}
		else
			count++;
	}
	printf("%d\n", count);
}