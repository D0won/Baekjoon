#include<stdio.h>
int main() {
	int i, j;
	int num;
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		for (j = num - i; j > 0; j--) {
			printf(" ");
		}
		for (j = 0; j < i; j++) {
			printf("%c", '*');
		}
		printf("\n");
	}
}
