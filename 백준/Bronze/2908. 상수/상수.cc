#include<stdio.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)
int main(void)
{
	char A[4], B[4];
	int num1 = 0, num2 = 0;
	scanf("%s %s", A, B);
	for (int i = 0; i < 3; i++)
	{
		num1 += (A[i]- '0') *pow(10, i);
		num2 += (B[i]-'0') * pow(10, i);
	}

	if (num1 > num2)
		printf("%d\n", num1);
	else
		printf("%d\n", num2);
	return 0;
}