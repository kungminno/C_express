#include <stdio.h>
#include <stdlib.h>

void convert(double* grades, double* scores, int size);

int main(void)
{
	double origin_grades[10] = { 0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.3 };
	double origin_scores[10] = { 0 };
	int i,j;

	for (i = 0; i < 10; i++) {
		printf("%05.2lf ", origin_grades[i]);
	}

	printf("\n");

	convert(origin_grades, origin_scores, 10);

	for (j = 0; j < 10; j++) {
		printf("%05.2lf ", origin_scores[j]);
	}
	return 0;
}
void convert(double* grades, double* scores, int size)
{
	int i;

	for (i = 0; i < size; i++) {
		scores[i] = 100 * (grades[i] / 4.3);
	}
}

