#include <stdio.h>
#include <stdlib.h>

int main94(void){
	// malloc calloc realloc free
	// Allocate block of memory
	// malloc : Void* malloc(size_t size)  size_t=unsigned int
	// malloc 在实际使用中通常用（ 数量 * 每个单位占用 unsigned int 大小）表示
	void *p = malloc(10 * sizeof(int)); // Void *p = malloc(40)
	printf("%d \n", p);
	// 因为 Void 指针不能赋值，*p = 2 会报错，所以通常强转成 type
	int *p1 = (int*)malloc(3 * sizeof(int));	// 不会初始化值
	// calloc: Void* calloc(size_t num, size_t size);
	int *p2 = (int*) calloc(3, sizeof(int));	// calloc 会将所有位初始化为 0 
	// realloc: change the size of the memory，改变已分配内存的大小
	// Void* realloc(Void* Ptr, size_t size);

	return 1;
}