#include <stdio.h>
#include <stdlib.h>

int main95(void){
	int n;
	printf("����������ĳ���\n");
	scanf("%d", &n);
	// int A[n]; // ����Ӧ���볣�����ʽ
	int *A = (int*)malloc(n*sizeof(int));	// ��̬�����ڴ�
	for (int i = 0 ; i < n ; i++) 
	{
		A[i] = i + 1;
	}

	// free(A);
	// free ֮����Ȼ�ܹ������ͻ��ֵ
	// A[0] = 6;

	int *B = (int*)realloc(A, 2*n*sizeof(int));	// realloc(A, 0) === free(A); realloc(null, n*sizeof(int)) === malloc(n*sizeof(int)); 
	printf("֮ǰ A �ĵ�ַ %d, B ���µ�ַ %d\n", A, B);	// ֮ǰ A �ĵ�ַ 19013816, B ���µ�ַ 19013816
	// 1       2       3       -842150451      -842150451      -842150451
	for (int i = 0 ; i < 2 * n ; i++)
	{
		printf("%d \t", B[i]);
	}
	return 1;
}