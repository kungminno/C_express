#include  <stdio.h>

void  get_sum_diff(int  x,  int  y,  int  *p_sum,  int  *p_diff);

int  main(void){
	int  sum=0,  diff=0;
	get_sum_diff(100,  200,  &sum,  &diff);
	printf("���ҵ��� ��=%d\n",  sum);
	printf("���ҵ��� ��=%d\n",  diff);return  0;
}

void  get_sum_diff(int  x,  int  y,  int  *p_sum,  int  *p_diff){
	*p_sum  =  x+y;
	*p_diff  =  x-y;
}