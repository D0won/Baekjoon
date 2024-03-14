#include<stdio.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)
int main(void)
{
	char arr[16];
	int Alp[26] = { 2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
	int sum = 0;
	scanf("%s", arr);
	for (int i = 0; i < strlen(arr); i++)
	{
		sum += (Alp[arr[i] - 'A'] + 1);
	}

	printf("%d\n", sum);
	return 0;
}