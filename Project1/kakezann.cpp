#include<stdio.h>

int main(void) {
	int array1[] = { 1,2,3,4,5,6,7,8,9 };
	int array2[] = { 1,2,3,4,5,6,7,8,9 };

	int i;
	
	for (i = 0; i < 9; i++) {
		printf(" %02d", array2[i]);
	}
	printf("\n");
	printf("%d", array1[0]);
	for (i = 0; i < 9; i++) {
		printf(" %02d", array1[0] * array2[i]);
	}
	printf("\n");
	printf("%d", array1[0] * array2[1]);
	for (i = 0; i < 9; i++) {
		printf(" %02d", array1[1] * array2[i]);
	}
	printf("\n");
	printf("%d", array1[0] * array2[2]);
	for (i = 0; i < 9; i++) {
		printf(" %02d", array1[2] * array2[i]);
	}
	printf("\n");
	printf("%d", array1[0] * array2[3]);
	for (i = 0; i < 9; i++) {
		printf(" %02d", array1[3] * array2[i]);
	}
	printf("\n");
	printf("%d", array1[0] * array2[4]);
	for (i = 0; i < 9; i++) {
		printf(" %02d", array1[4] * array2[i]);
	}
	printf("\n");
	printf("%d", array1[0] * array2[5]);
	for (i = 0; i < 9; i++) {
		printf(" %02d", array1[5] * array2[i]);
	}
	printf("\n");
	printf("%d", array1[0] * array2[6]);
	for (i = 0; i < 9; i++) {
		printf(" %02d", array1[6] * array2[i]);
	}
	printf("\n");
	printf("%d", array1[0] * array2[7]);
	for (i = 0; i < 9; i++) {
		printf(" %02d", array1[7] * array2[i]);
	}
	printf("\n");
	printf("%d", array1[0] * array2[8]);
	for (i = 0; i < 9; i++) {
		printf(" %02d", array1[8] * array2[i]);
	}
}