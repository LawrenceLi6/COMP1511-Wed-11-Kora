#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int tri(int n) {
	int returnVal = -1;
	if (n == 0) {
		returnVal = 0;
	} else {
		returnVal = n+ tri(n-1);
	}
	return returnVal;
}


int main(int argc, char* argv[]) {
	printf("tri(%d) = %d\n",0,tri(0));
	printf("tri(%d) = %d\n",1,tri(1));
	printf("tri(%d) = %d\n",5,tri(5));
	return EXIT_SUCCESS;
}