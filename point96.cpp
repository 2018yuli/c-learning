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

// 将内存开在堆中
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
	// int z = Add2(&x, &y);	// x, y 位于 main 函数的栈帧中
	int* ptr = Add3(&x, &y);
	printf("Sum = %d\n", *ptr);	// Sum = 6，尽管 Add3 的函数栈帧被清理了，但是值还是可以通过 *ptr 取到
	PrintHelloWorld();			// Hello World	，Add3 的函数栈帧所在内存被 PrintHelloWorld 函数改写，取不到值了
	printf("Sum = %d\n", *ptr);	// Sum = -858993460

	int* ptr2 = Add4(&x, &y);
	PrintHelloWorld();
	printf("Sum = %d\n", *ptr2);	// Sum = 6
	
	return 1;
}