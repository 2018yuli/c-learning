#include <stdio.h>

int main2(void){
	int a = 1025;
	int *p =&a;

	printf("int �Ĵ�С %d\n", sizeof(int));
	printf("p �ĵ�ַ %d\n", p);
	printf("p ��ֵ %d\n", *p);

	char *p0;
	p0 = (char*) p; // ����ת��
	printf("char �Ĵ�С %d\n", sizeof(char));			// char �Ĵ�С 1 byte
	printf("p0 �ĵ�ַ %d �� p0 ��ֵ %d \n", p0, *p0);	// p0 �ĵ�ַ 15727416 �� p0 ��ֵ 1
	// 1025 = 00000000 00000000 00000100 00000001������ǿת�� p0 ��ֵΪ 00000001

	// Void Point ��ָ�룬genric point ͨ��ָ��
	void *p1;
	p1 = p;
	// printf("p1 �ĵ�ַ %d �� p1 ��ֵ %d \n", p1, *p1);	// ���뱨��
	printf("p1 �ĵ�ַ %d\n", p1);
	// printf("p1 + 1 �ĵ�ַ %d\n", p1 + 1);				// ���뱨��Void Point ����������
	return 1;
}