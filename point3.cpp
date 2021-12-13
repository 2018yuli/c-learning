#include <stdio.h>

int main3(void){
	// Point to Point
	int x = 5;
	int *p = &x;

	printf("p 的地址 %d\n", p);						// p 的地址 8125956

	int **q = &p;
	printf("q 的地址 %d，q 的值 %d \n", q, *q);		// q 的地址 8125944，q 的值 8125956

	printf("*int 的大小 %d \n", sizeof(int*));		// *int 的大小 4
	printf("**int 的大小 %d \n", sizeof(int**));	// **int 的大小 4
	printf("*(*q) 的值 %d \n", *(*q));

	return 1;
}