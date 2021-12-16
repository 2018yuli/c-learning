#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void BubbleSort1(int *A, int n)
{
	int i, j, temp;
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = i ; j < n ; j++)
		{
			if (A[j] < A[i]) 
			{
				temp = A[j];
				A[j] = A[i];
				A[i] = temp;
			}
		}
	}

}

void BubbleSort(int *A, int n, bool (*compare)(int,int))
{
	int i, j, temp;
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < n - 1 ; j++)
		{
			if (compare(A[j], A[j + 1])) 
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}

}

bool Compare(int a, int b) 
{
	return a > b;
}

int CompareIn991(const void* a, const void* b)
{
	int A = *((int*)a);
	int B = *((int*)b);
	return A - B;
}

int main991(void){
	// ≈≈–Ú
	int i, A[] = {3, 2, 1, 5, 6, 4};
	bool (*compare)(int, int) = Compare;
	// BubbleSort(A, sizeof(A)/sizeof(int), compare);
	BubbleSort(A, sizeof(A)/sizeof(int), Compare);
	for (i = 0 ; i < 6 ; i++) printf("%d ", A[i]);
	
	printf("\n");
	// using lib qsort
	int j, B[] = {-31, 22, -1, 50, -6, 4};
	qsort(B, sizeof(B)/sizeof(int), sizeof(int), CompareIn991);
	for (j = 0 ; j < 6 ; j++) printf("%d ", B[j]);

	return 1;
}