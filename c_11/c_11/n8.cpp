#include <stdio.h>
#include <stdlib.h>
#define len_data 10

int array_sum(int* A, int size);

int main(void)
{
	int pay[len_data] = { 1, 2, 3 };
	int total = 0;
	int i, j;

	printf("A[] = {");
	for (i = 0; i < len_data; i++) {
		printf("%d ", pay[i]);
	}

	printf("}\n");

	total = array_sum(pay,  len_data);

	printf("월급의 합 = % d ", total);

	printf("\n");
	return 0;
}
int array_sum(int* A, int size)
{
	int i, sum=0 ;

	for (i = 0; i < size; i++) {
		sum += A[i];
	}

	return sum;
}

