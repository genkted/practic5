#include <stdio.h>
#include <stdlib.h>
#include "fun.h"
void func() {
	int mat[8][5];
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 5; j++) {
			mat[i][j] = rand() % 100 - 50;
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	int min1 = 55, max1 = -55, ind11=-1, ind21=-1, ind12=-1, ind22=-1;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 5; j++) {
			if (mat[i][j] < min1) {
				min1 = mat[i][j];
				ind11 = i;
				ind21 = j;
			}
			if (mat[i][j] > max1) {
				max1 = mat[i][j];
				ind12 = i;
				ind22 = j;
			}
		}
	}
	if (min1 != 55)
		printf("Min: %d Index: %d %d\n", min1, ind11, ind12);
	if (max1 != -55)
		printf("Max: %d Index: %d %d\n", max1, ind21, ind22);
	if (min1 == 55 && max1 == -55)
		printf("No ekstremum!");
}
