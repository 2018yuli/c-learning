#include <stdio.h>

int AddIn97(int a, int b)
{
	return a + b;
}

// 定义一个返回 int* 的函数
int * Func(int, int);
// 定义一个函数指针
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
	//		- 堆（heap）栈（Stack）全局变量（Static/Global）代码（Code(Text)）
	//		- 代码（Code(Text)）内存模型，由一些列 instruction 组成，在执行时拷贝到主存
	//			...
	//			instruction01
	//			instruction02
	// 			instruction03
	//			instruction04
	//		216:instruction05 -|
	//			instruction06  | -> function1 的 address or entryPoint = 216
	//			instruction07  |
	//			instruction08 -|
	//			instruction09
	//			....
	// Function Points store the start of the address of memory containing all the instructions in a function
	// Use cases 具有参数(int, int) 且返回 int 的函数指针申明为：int (*p)(int, int);
	int c;
	int (*p)(int, int);
	p = AddIn97;		// p = &AddIn97; 也可以
	// c = (*p)(2, 3);		// 使用 *p 调用该函数
	// 也可以直接使用 
	c = p(2, 3);
	printf("%d\n", c);	// 输出 5

	void (*ptr)(char*);
	ptr = PrintHelloIn97;
	ptr("Tom");

	return 1;
}