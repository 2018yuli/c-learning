#include <stdio.h>

int main3(void){
	// Point to Point
	int x = 5;
	int *p = &x;

	printf("p �ĵ�ַ %d\n", p);						// p �ĵ�ַ 8125956

	int **q = &p;
	printf("q �ĵ�ַ %d��q ��ֵ %d \n", q, *q);		// q �ĵ�ַ 8125944��q ��ֵ 8125956

	printf("*int �Ĵ�С %d \n", sizeof(int*));		// *int �Ĵ�С 4
	printf("**int �Ĵ�С %d \n", sizeof(int**));	// **int �Ĵ�С 4
	printf("*(*q) ��ֵ %d \n", *(*q));

	return 1;
}