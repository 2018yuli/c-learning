#include <stdio.h>
#include <stdlib.h>

int main94(void){
	// malloc calloc realloc free
	// Allocate block of memory
	// malloc : Void* malloc(size_t size)  size_t=unsigned int
	// malloc ��ʵ��ʹ����ͨ���ã� ���� * ÿ����λռ�� unsigned int ��С����ʾ
	void *p = malloc(10 * sizeof(int)); // Void *p = malloc(40)
	printf("%d \n", p);
	// ��Ϊ Void ָ�벻�ܸ�ֵ��*p = 2 �ᱨ������ͨ��ǿת�� type
	int *p1 = (int*)malloc(3 * sizeof(int));	// �����ʼ��ֵ
	// calloc: Void* calloc(size_t num, size_t size);
	int *p2 = (int*) calloc(3, sizeof(int));	// calloc �Ὣ����λ��ʼ��Ϊ 0 
	// realloc: change the size of the memory���ı��ѷ����ڴ�Ĵ�С
	// Void* realloc(Void* Ptr, size_t size);

	return 1;
}