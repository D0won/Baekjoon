#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int sum = 0;
	char arr[100];
	int num;
	scanf("%d", &num);
	scanf("%s", arr);
	
	for (int i = 0; i < num; i++)
	{
		sum += arr[i] - 48;
	}

	printf("%d \n", sum);
}