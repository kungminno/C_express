#include <stdio.h>
#include <stdlib.h>

void array_fill(int* A, int size);

int main(void)
{
	int a[10];
	int size;
	int i;

	size = sizeof(a) / sizeof(a[0]);

	array_fill(a, size);
		
	for (i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
void array_fill(int* A, int size)
{
	int i;
	for (i = 0; i < size; i++) {
		A[i] = rand();
	}
}

