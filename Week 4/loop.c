#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){
	/*
	 * Write a while loop to print all
	 * even numbers between 0 and 50
	 */
	int count = 0;
	while (count <= 50){
		printf("%d\n",count);
		count+=2;
	}
	/*
	 * Write a while loop to print out
	 * a rectangle x accross and y high
	 */
	int x = 10;
	int y = 5;
	int i = 0;
	int j = 0;

	while (j<y){
	
		while (i<x){
			printf("*");
			i=i+1;
		}
		
		printf("\n");
		j=j+1;
		i = 0;
	}
    return EXIT_SUCCESS;
}

