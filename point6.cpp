#include <stdio.h>

int sumOfElements(int A[], int size) 
{
	int i, sum = 0;
	// 不能这样做，这里形参 A[] 会被编译器优化为 *int 而不是复制一份数组
	// 所以 sizeof(A) = 4,sizeof(A[0]) = 4
	// int size = sizeof(A)/sizeof(A[0]);
	for (i = 0 ; i < size ; i++) 
	{
		sum = sum + A[i];
	}
	return sum;
}

int sumOfElements2(int* A, int size) 
{
	int i, sum = 0;
	for (i = 0 ; i < size ; i++) 
	{
		// A[i] == *(A + i)
		sum = sum + A[i];
	}
	return sum;
}

int main6(void)
{
	// Arrays as function arguments
	int A[] = {1, 2, 3, 4, 5};
	int size = sizeof(A)/sizeof(A[0]);
	int total = sumOfElements2(A, size);

	printf("sumOfElements A = %d \n", total);	// 15
	return 1;
}