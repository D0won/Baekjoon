#include<stdio.h>
#pragma warning(disable:4996)
#include<string.h>
int main(void)
{
	char arr[1000];
	int num;
	scanf("%s", arr);
	scanf("%d", &num);
	printf("%c", arr[num - 1]);

	return 0;
}