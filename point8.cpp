#include <stdio.h>

int main8(void){
	// Points and multi-dimensional arrays
	int B[2][3];
	int (*p)[3] = B;

	printf("B = %d \n", B);								// B = 9959376
	printf("*(B + 1) = %d \n", *(B + 1));				// *(B + 1) = 9959388
	printf("*B or B[0] or &B[0][0] = %d \n", B[0]);		// *B or B[0] = 9959376
	printf("B + 1 = %d \n", B + 1);			// B + 1 = 9959388

	printf("*(B + 1) + 2 or B[1] + 2 or B[1][2] = %d \n", *(B + 1) + 2);		// *(B + 1) + 2 = 9959388 + 2 * 4�� ���� B �� **int ���ͣ�*(B + 1) �� *int ���� ��

	printf("*(*B + 1) or B[0][1] = %d \n", *(*B + 1));	// -858993460

	// B[2][3],(*p)[3] = B �������Ϊ�ж������Ϊ [3] ��һά���飬����д�� (*p)[3] 
	printf("(*p)[3] = %d \n", p);			// (*)p[3] = 9959376
	printf("p[0] = %d \n", p[0]);			// p[0] = 9959376
	printf("p[1] = %d \n", p[1]);			// p[1] = 9959388
	printf("p[2] = %d \n", p[2]);			// p[2] = 9959400
	return 1;
}