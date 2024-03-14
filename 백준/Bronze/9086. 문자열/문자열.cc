#include<stdio.h>
#pragma warning(disable:4996)
#include<string.h>
int main(void)
{
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++)
	{
		char arr[1000];
		scanf("%s", arr);
		printf("%c%c\n", arr[0], arr[strlen(arr) - 1]);
	}
	
	
}