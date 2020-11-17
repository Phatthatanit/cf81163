#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int i[2];
void sum(int* a) {
	for (i[1] = 1; i[1] <= *a; i[1] ++) {
		for (i[2] = 1; i[2] <= *a; i[2] ++) {
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
		printf("\n\n\n| have %d and * have %d\n", (i[2] - 1) * a, i[1] - 1);
	}
}

