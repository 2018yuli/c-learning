#include <stdio.h>

int main2(void){
	int a = 1025;
	int *p =&a;

	printf("int 的大小 %d\n", sizeof(int));
	printf("p 的地址 %d\n", p);
	printf("p 的值 %d\n", *p);

	char *p0;
	p0 = (char*) p; // 类型转换
	printf("char 的大小 %d\n", sizeof(char));			// char 的大小 1 byte
	printf("p0 的地址 %d ， p0 的值 %d \n", p0, *p0);	// p0 的地址 15727416 ， p0 的值 1
	// 1025 = 00000000 00000000 00000100 00000001，所以强转后 p0 的值为 00000001

	// Void Point 空指针，genric point 通用指针
	void *p1;
	p1 = p;
	// printf("p1 的地址 %d ， p1 的值 %d \n", p1, *p1);	// 编译报错
	printf("p1 的地址 %d\n", p1);
	// printf("p1 + 1 的地址 %d\n", p1 + 1);				// 编译报错，Void Point 不允许运算
	return 1;
}