#include <stdio.h>
#include <stdlib.h>

void array_print(int* A, int size);

int main(void)
{
	int a[10]={1, 2, 3, 4};
	int size;
	int i;

	size = sizeof(a) / sizeof(a[0]);

	array_print(a, size);

	return 0;
}
void array_print(int* A, int size)
{
	int i;
	printf("A[] = {");

	for (i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("}");
}

