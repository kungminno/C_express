#include <stdio.h>
#include <stdlib.h>

void convert(double* grades, double* scores, int size);

int main(void) {


	double all_grade[10] = { 0.0, 0.5 , 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.3 };
	double all_score[10] = { 0 };
	int i,j;

	for (i = 0; i < 10; i++) {
		printf("%05.2lf ", all_grade[i]);
	}
	convert(all_grade, all_score, 10);

	printf("\n");

	for (j = 0; j < 10; j++) {
		printf("%05.2lf ", all_score[j]);
	}

	return 0;
}
void convert(double* grades, double* scores, int size)
{
	int i;


	for (i = 0; i < size; i++) {
		scores[i] = 100.0 * (grades[i] / 4.3);
	}

}
