#include <stdio.h>
#include <stdlib.h>
#include "fun.h"
void func() {
	int mas[35];
	for (int i = 0; i < 35; i++) {
		mas[i] = rand() % 100 - 50;
		printf("%d ", mas[i]);
	}
	printf("\n");
	int min1 = 55, max1 = -55, ind1 = -1, ind2 = -1;
	for (int i = 0; i < 35; i++) {
		if (mas[i] < min1) {
			min1 = mas[i];
			ind1 = i;
		}
		if (mas[i] > max1) {
			max1 = mas[i];
			ind2 = i;
		}
	}
	if (min1 != 55)
		printf("Min: %d Index: %d\n", min1, ind1);
	if (max1 != -55)
		printf("Max: %d Index: %d\n", max1, ind2);
	if (min1 == 55 && max1 == -55)
		printf("No ekstremum!");
}
