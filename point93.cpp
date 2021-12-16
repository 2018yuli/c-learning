#include <stdio.h>
#include <stdlib.h>

int main93(void){
	// Points and Dynamic Memory
	// c functions
	//		malloc
	//		calloc
	//		realloc
	//		free
	// c++ operators
	//		new
	//		delete
	int a;
	// p 将分配在栈中（和 Java 一样啊）
	int *p;
	// 请求分配 堆 内存 malloc 返回一个指针，指向分配的内存的首地址，如果找不到可用内存，则返回 null
	p = (int*)malloc(sizeof(int));
	*p = 10;
	free(p);
	// 再次分配，之前分配的 p = 10 的内存，将不会被回收，需要手动调用 free(p) 回收
	p = (int*)malloc(20 * sizeof(int));
	*p = 20;
	free(p);

	// 在 c++ 中
	p = new int;
	*p = 10;
	delete p;
	p = new int[20];
	delete[] p;

	return 1;
}