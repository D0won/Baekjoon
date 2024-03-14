#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main(void)
{
	char arr[1000001];
	int C = 0;
	scanf("%[^\n]", arr);
	for (int i = 1; i < strlen(arr)-1; i++)
	{
		if (arr[i] == ' ')
			C++;
	}
	if (strlen(arr) == 1)
	{
		if (arr[0] == ' ')
			printf("0\n");
		else
			printf("%d\n", C + 1);
	}
	else
		printf("%d\n", C + 1);
	return 0;
}