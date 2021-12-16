#include <stdio.h>

void A()
{
	printf("Hello");
}

void B(void (*ptr)())
{
	ptr();	// 调用回调方法
}

int main98(void){
	// Function Pointers and Callbacks 函数回调
	void (*p)() = A;
	B(p);
	return 1;
}