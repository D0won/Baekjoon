#include<stdio.h>
#pragma warning(disable:4996)
#include<string.h>
#include<math.h>

int main(void)
{
	char N[100001];
	int B, total = 0;
	scanf("%s %d", N, &B);
	int len = strlen(N);
	for (int i = 0; i < len; i++)
	{	
		if (N[i] >= 'A' && N[i] <= 'Z')
			total += (N[i] - 'A' + 10) * pow(B, (len-1)-i);
		else if(N[i] >= '0' && N[i] <= '9')
			total += (N[i] - '0') * pow(B, (len-1)-i);
	}
	printf("%d\n", total);
}