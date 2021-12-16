#include <stdio.h>
#include <stdlib.h>

int Add(int a, int b) // Called function
{
	int c = a + b;
	return c;
}

int Add2(int* a, int* b) // Called function
{
	int c = (*a) + (*b);
	return c;
}

int *Add3(int* a, int* b)
{
	int c = (*a) + (*b);
	return &c;
}

// ���ڴ濪�ڶ���
int *Add4(int* a, int* b)
{
	int* c = (int*)malloc(sizeof(int));
	*c = (*a) + (*b);
	return c;
}

void PrintHelloWorld()
{
	printf("Hello World\n");
}

int main96(void){	// Calling function
	// Pointers as function returns
	int x = 2, y = 4;
	// int z = Add2(&x, &y);	// x, y λ�� main ������ջ֡��
	int* ptr = Add3(&x, &y);
	printf("Sum = %d\n", *ptr);	// Sum = 6������ Add3 �ĺ���ջ֡�������ˣ�����ֵ���ǿ���ͨ�� *ptr ȡ��
	PrintHelloWorld();			// Hello World	��Add3 �ĺ���ջ֡�����ڴ汻 PrintHelloWorld ������д��ȡ����ֵ��
	printf("Sum = %d\n", *ptr);	// Sum = -858993460

	int* ptr2 = Add4(&x, &y);
	PrintHelloWorld();
	printf("Sum = %d\n", *ptr2);	// Sum = 6
	
	return 1;
}