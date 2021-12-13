#include <stdio.h>

/*
int main(void){
	int a;
	int *p;
	char c;
	char *p0;
	double d;
	double *d0;
	printf("%d\n", p);
	return 1;
}
*/

int main1(void){
	int a;
	int *p;
	a = 10;
	p = &a;
	printf("%d\n", p);
	printf("%d\n", &a);
	printf("%d\n", *p);
	// *p 只会修改 a 变量的值，不会修改索引 p 的指向，除非 p = &b;
	int b = 20;
	*p = b;
	printf("%d\n", p);
	printf("%d\n", *p);
	printf("%d\n", a);

	// Point arithmetic 索引运算
	printf("%d\n", sizeof(int));
	printf("%d\n", p + 1);
	printf("%d\n", *(p + 1));

	return 1;
}