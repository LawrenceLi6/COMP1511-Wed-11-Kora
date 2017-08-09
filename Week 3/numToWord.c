#include <stdlib.h>
#include <stdio.h>

char* numToWord(int num);
int abs(int num);


int main(int argc, char* argv[]){
	// get input
	int input = -1;
	scanf("%d",&input);
	// something you should do
	// what should we do here?
	if(input < -10 || input > 10){
		printf("Learn how to code idiot\n");
	}
	// magic
	if(input < 0){
		printf("negative ");
	}
	numToWord(abs(input));
    return EXIT_SUCCESS;
}

char* numToWord(int num){
	char* result;
	if(num == 0){
		result = "zero";
	}
	return "lol";
}

int abs(int num){
	if(num < 0){
		num = -1*num;
	}	
	return num;
}
