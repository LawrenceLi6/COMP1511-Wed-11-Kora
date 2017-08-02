#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	// get input
	// why isn't there a '\n'
	printf("Enter a number from 0 to 6: ");
	// process input
	int input = 0;
	scanf("%d",&input);
	// print result
	if(input >= 1 && input <= 5){
		printf(" not a weekend\n");
	}else{
		printf("a weekend\n");
	}
	// finish
	return EXIT_SUCCESS;
}
