#include <stdio.h>
#include <stdlib.h>
#define len_data 10

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd);

int main(void)
{
	int x = 0, y = 0;
	int lcm=0, gcd=0;

	printf("두개의 정수를 입력하시오: ");
	scanf_s("%d %d", &x, &y);


	get_lcm_gcd(x, y, &lcm, &gcd);

	printf("최소공배수는 %d입니다\n", lcm);
	printf("최대공약수는 %d입니다", gcd);
	printf("\n");

	return 0;
}
void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd)
{
	int x2=0,y2=0,r=0;

	x2 = x;
	y2 = y;

	if (x > y) {
		while (y != 0)
		{
			r = x % y;
			x = y;
			y = r;
		}
		*p_gcd = x;
	}
	else {
		while (x != 0)
		{
			r = y % x;
			y = x;
			x = r;
		}
		*p_gcd = y;

	}
	
	*p_lcm = (x2 * y2) / *p_gcd;
}

