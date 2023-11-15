#include<stdio.h>
#pragma warning(disable:4996)
#include<string.h>
int main(void)
{
	char arr[100];
	int check = 1;
	scanf("%s", arr);

	int j = strlen(arr);
	for (int i = 0; i <j/2; i++)
	{
		if (arr[i] != arr[(j-1) - i])
		{
			check = 0;
		}
	}
	printf("%d", check);
}