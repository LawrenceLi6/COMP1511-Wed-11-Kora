#include <stdlib.h>
#include <stdio.h>

void printOutAB(int* a, int* b){

}

int main (int argc, char *argv[]) {
	int A = 1;
	int B = 2;
	int *pointerToA = &A;
	int *pointerToB = &B;
	printf("Ap: %p ,Bp: %p\n", pointerToA, pointerToB);
		
	printOutAB(&A, pointerToB);
	return EXIT_SUCCESS;
}
