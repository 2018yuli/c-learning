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
	// p ��������ջ�У��� Java һ������
	int *p;
	// ������� �� �ڴ� malloc ����һ��ָ�룬ָ�������ڴ���׵�ַ������Ҳ��������ڴ棬�򷵻� null
	p = (int*)malloc(sizeof(int));
	*p = 10;
	free(p);
	// �ٴη��䣬֮ǰ����� p = 10 ���ڴ棬�����ᱻ���գ���Ҫ�ֶ����� free(p) ����
	p = (int*)malloc(20 * sizeof(int));
	*p = 20;
	free(p);

	// �� c++ ��
	p = new int;
	*p = 10;
	delete p;
	p = new int[20];
	delete[] p;

	return 1;
}