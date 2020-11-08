#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int i,j;
void sum(int* a) {
	for (i = 1; i <= *a; i++) {
		for (j = 1; j <= *a; j++) {
			printf("|");
		}
		printf("*");
	}
}
int main() {
	int a;
	scanf("%d", &a);
	sum(&a);
	if (a <= 0) {
		printf("\n\n\n| have 0 and * have 0\n");
	}
	else {
		printf("\n\n\n| have %d and * have %d\n", (j - 1) * a, i - 1);
	}
}

