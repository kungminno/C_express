#include <stdio.h>
#include <stdlib.h>

void array_copy(int* A, int* B, int size);

int main(void)
{
	int origin[10] = { 1, 2, 3, 4 };
	int origin_copy[10] = { 0 };
	int i, j;

	printf("A[] = {");
	for (i = 0; i < 10; i++) {
		printf("%d ", origin[i]);
	}

	printf("}\n");

	array_copy(origin, origin_copy, 10);

	printf("B[] = {");
	for (j = 0; j < 10; j++) {
		printf("%d ", origin_copy[j]);
	}
	printf("}\n");
	return 0;
}
void array_copy(int* A, int* B, int size)
{
	int i;

	for (i = 0; i < size; i++) {
		B[i] = A[i];
	}
}

