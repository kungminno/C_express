#include <stdio.h>
#include <stdlib.h>

void get_int(int* px, int* py);

int main(void)
{
	int x = 0, y = 0;

	printf("2���� ������ �Է��Ͻÿ�(��: 10 20): ");
	scanf_s("%d %d", &x, &y);

	get_int(&x, &y);

	return 0;
}
void get_int(int* px, int* py)
{
	int sum=0;

	sum = *px + *py;

	printf("������ ���� %d\n", sum);
}

