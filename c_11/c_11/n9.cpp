#include <stdio.h>
#include <stdlib.h>

int search(int* A, int size, int search_value);

int main(void)
{
	int pay[10] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
	int size=0,index=0;
	int i, j;

	size = sizeof(pay) / sizeof(pay[0]);


	index= search(pay, size, 200);

	
	printf("월급이 200인 사람의 인덱스: %d ", index);
	printf("\n");
	return 0;
}
int search(int* A, int size, int search_value)
{
	int i;
	
	search_value = 0;

	for (i = 0; i < size; i++) {
		if (A[i] == 200) {
			search_value++;
		}
	}

	return search_value;
}

