#include <stdio.h>
#include <stdlib.h>
#define len_data 10

void array_add(int* A, int* B, int* C, int size);

int main(void)
{
	int pay[len_data] = { 1, 2, 3, 4 };
	int bonus[len_data] = { 0 };
	int total[len_data] = { 0 };
	int i, j, k;

	printf("A[] = {");
	for (i = 0; i < len_data; i++) {
		printf("%d ", pay[i]);
	}

	printf("}\n");

	printf("B[] = {");
	for (j = 0; j < len_data; j++) {
		printf("%d ", bonus[j]);
	}
	printf("}\n");

	array_add(pay, bonus, total, len_data);

	printf("C[] = {");
	for (k = 0; k < len_data; k++) {
		printf("%d ", total[k]);
	}
	printf("}\n");
	return 0;
}
void array_add(int* A, int* B, int* C, int size)
{
	int i;

	for (i = 0; i < size; i++) {
		C[i] = A[i] + B[i];
	}
}

