#include <stdlib.h>
#include <stdio.h>

void setArrayValues(int length, int array[], int value);
void printArray(int array[], int size);

int main(int argc, char* argv[]){
	// tests
	int array[8]; 
	setArrayValues(10,array,8);
    return EXIT_SUCCESS;
}

void setArrayValues(int length, int array[], int value){
	
}
void printArray(int array[], int size){
	int i = 0;
	while(i<size){
		if(i == size-1){
			print("%d",array[i]);
		}else{
			printf("%d, ",array[i]);
		}
		i++;
	}
	printf("\n");
}

