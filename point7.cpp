#include <stdio.h>
#include <string.h>

int main7(void){
	// character arrays and points
	char C[5];
	C[0] = 'J';
	C[1] = 'O';
	C[2] = 'H';
	C[3] = 'N';
	
	printf("%s \n", C);	// JOHNÌÌÌÌ°ûO

	C[4] = '\0';
	printf("%s \n", C);	// 

	int len = strlen(C);
	printf("Length = %d \n", len);

	char N[20] = "John";
	int len2 = strlen(N);
	printf("Length of N = %d \n", len2);

	char M[] = "John";
	printf("Size in byte = %d \n", sizeof(M));
	int len3 = strlen(M);
	printf("Length of M = %d \n", len3);

	// points and arrays are different types that are used in similar manner;
	char *C1;
	C1 = C;
	// C = C1 ±¨´í
	// C = C + 1 ±¨´í
	return 1;
}