#include <stdio.h>

int AddIn97(int a, int b)
{
	return a + b;
}

// ����һ������ int* �ĺ���
int * Func(int, int);
// ����һ������ָ��
int (*FuncB)(int, int);

void PrintHelloIn97(char *name) 
{
	printf("Hello %s\n", name);
}

int main97(void){
	// Function Pointers
	// Pointers can point to data
	// Pointers can point to functions
	// address of a function
	//		- �ѣ�heap��ջ��Stack��ȫ�ֱ�����Static/Global�����루Code(Text)��
	//		- ���루Code(Text)���ڴ�ģ�ͣ���һЩ�� instruction ��ɣ���ִ��ʱ����������
	//			...
	//			instruction01
	//			instruction02
	// 			instruction03
	//			instruction04
	//		216:instruction05 -|
	//			instruction06  | -> function1 �� address or entryPoint = 216
	//			instruction07  |
	//			instruction08 -|
	//			instruction09
	//			....
	// Function Points store the start of the address of memory containing all the instructions in a function
	// Use cases ���в���(int, int) �ҷ��� int �ĺ���ָ������Ϊ��int (*p)(int, int);
	int c;
	int (*p)(int, int);
	p = AddIn97;		// p = &AddIn97; Ҳ����
	// c = (*p)(2, 3);		// ʹ�� *p ���øú���
	// Ҳ����ֱ��ʹ�� 
	c = p(2, 3);
	printf("%d\n", c);	// ��� 5

	void (*ptr)(char*);
	ptr = PrintHelloIn97;
	ptr("Tom");

	return 1;
}