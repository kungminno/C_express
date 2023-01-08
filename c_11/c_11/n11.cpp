#include <stdio.h>
#include <stdlib.h>

void merge(int* A, int* B, int* C, int size);

int main(void)
{
	int a[4] = { 2, 4, 6, 8 };
	int b[4] = { 1, 3, 5, 7 };
	int total[8] = { 0 };
	int i, j, k;

	printf("A[] = {");
	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}

	printf("}\n");

	printf("B[] = {");
	for (j = 0; j < 5; j++) {
		printf("%d ", b[j]);
	}
	printf("}\n");

	merge(a, b, total, 8);

	printf("C[] = {");
	for (k = 0; k < 8; k++) {
		printf("%d ", total[k]);
	}
	printf("}\n");
	return 0;
}
void merge(int* A, int* B, int* C, int size)
{
	int i,j,k;

	for (k = 0; k < 8; k++) {
		for (i = 0; i < 4; i++) {
			for (j = 0; j < 4; j++) {
				if (A[j] < B[i])
					C[k] = A[j];

			}
		}
	}
}

