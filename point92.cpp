#include <stdio.h>

int FuncA(int *A) 
{
	return 1;
}
int FuncB(int (*A)[3])
{
	return 1;
}
// B[][3] 只能接受 B[2][3],B[3][3] 不能接受实参 B[2][4]
int FuncB1(int B[][3])
{
	return 1;
}
int FuncC(int (*C)[2][2])
{
	return 1;
}
int FuncC1(int C[][2][2])
{
	return 1;
}
int main92(void){
	int C[3][2][2] = {
		{{2, 5},{7, 9}},
		{{3, 4},{6, 1}},
		{{0, 8}, {11, 13}}
	};
	printf("%d %d %d %d \n", C, *C, C[0], &C[0][0]);
	printf("%d \n", *(C[0][0] + 1));	// 5,C[0][0] 是 *int 型指针 + 1 = 指针后移一个 int 所以是 5

	int A[2] = {1, 2};
	int B[2][3] = {{1, 3, 5}, {2, 4, 6}};
	FuncA(A);
	FuncB(B);
	FuncC(C);

	return 1;
}