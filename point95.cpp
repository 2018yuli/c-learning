#include <stdio.h>
#include <stdlib.h>

int main95(void){
	int n;
	printf("请输入数组的长度\n");
	scanf("%d", &n);
	// int A[n]; // 报错：应输入常量表达式
	int *A = (int*)malloc(n*sizeof(int));	// 动态分配内存
	for (int i = 0 ; i < n ; i++) 
	{
		A[i] = i + 1;
	}

	// free(A);
	// free 之后仍然能够操作和获得值
	// A[0] = 6;

	int *B = (int*)realloc(A, 2*n*sizeof(int));	// realloc(A, 0) === free(A); realloc(null, n*sizeof(int)) === malloc(n*sizeof(int)); 
	printf("之前 A 的地址 %d, B 的新地址 %d\n", A, B);	// 之前 A 的地址 19013816, B 的新地址 19013816
	// 1       2       3       -842150451      -842150451      -842150451
	for (int i = 0 ; i < 2 * n ; i++)
	{
		printf("%d \t", B[i]);
	}
	return 1;
}