#include <stdio.h>

void A()
{
	printf("Hello");
}

void B(void (*ptr)())
{
	ptr();	// ���ûص�����
}

int main98(void){
	// Function Pointers and Callbacks �����ص�
	void (*p)() = A;
	B(p);
	return 1;
}