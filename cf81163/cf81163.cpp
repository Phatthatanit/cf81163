#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a,i,j;
void sum() {
	for (i = 1; i <= a; i++) {
		for (j = 1; j <= a; j++) {
			printf("|");
		}
		printf("*");
	}
}
int main() {
	scanf("%d", &a);
	sum();
	printf("\n\n\n| have %d and * have %d\n", (j-1)*a,i-1);
}

