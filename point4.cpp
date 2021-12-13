#include <stdio.h>

void Increment(int a)
{
	a = a + 1;
}

void Increment2(int *p)
{
	*p = *p + 1;
}


int main4(void){
	// Points as function arguments (call by reference)
	int a = 10;
	Increment(a);
	printf("a = %d \n", a);

	// call by reference 能节省大量的内存
	int *p = &a;
	// Increment2(p);
	Increment2(&a);
	printf("a = %d \n", a);
	return 1;
}

