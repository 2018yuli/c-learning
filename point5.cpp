#include <stdio.h>

int main5(void){

	// Pointer and Arrays
	// int a[5];
	// a[0] = 1;
	// a[1] = 2;
	// a[2] = 3;
	// a[3] = 4;
	// a[4] = 5;
	int a[] = {1,2,3,4,5};

	// int *p = &a[0];
	int *p = a;
	
	printf("a = %d \n", a);				// 16579712
	printf("*a = %d \n", *a);			// 1

	printf("p = %d \n", p);				// 16579712
	printf("*p = %d \n", *p);			// 1
	printf("*p + 1 = %d \n", *(p + 1));	// 2

	// 报错，不能 a++，error C2105: “++”需要左值
	// a++;
	printf("a[3] = %d \n", a[3]);
	printf("a[3] = %d \n", *(a + 3));

	return 1;
}