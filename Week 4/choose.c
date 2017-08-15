#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int getRandomNumber(){
	srand(time(NULL));
	int i = 0;
	int r = 0;
	while(i < 16){
		r = rand();
		i++;
	}
	return (rand()%13);
}



















int main(int argc, char* argv[]){
    int n = getRandomNumber();
	if(n == 1){
		printf("THE LUCKY WINNER IS >>> McKenzie D AND Diane M <<<\n");
	}
	if(n == 2){
		printf("THE LUCKY WINNER IS >>> Carlo P AND Jordan G <<<\n");
	}
	if(n == 3){
		printf("THE LUCKY WINNER IS >>> Tristan N AND Yixuan C <<<\n");
	}
	if(n == 4){
		printf("THE LUCKY WINNER IS >>> Peter P AND Lavan S <<<\n");
	}
	if(n == 5){
		printf("THE LUCKY WINNER IS >>> Noah K AND Louis Y <<<\n");
	}
	if(n == 6){
		printf("THE LUCKY WINNER IS >>> Yangyuan L AND Andrew M <<<\n");
	}
	if(n == 7){
		printf("THE LUCKY WINNER IS >>> Brendan D AND Jiaying Y <<<\n");
	}
	if(n == 8){
		printf("THE LUCKY WINNER IS >>> Hannah E AND Jemima S <<<\n");
	}
	if(n == 9){
		printf("THE LUCKY WINNER IS >>> Bathara L AND Patrick C <<<\n");
	}
	if(n == 10){
		printf("THE LUCKY WINNER IS >>> Haseeb S AND Vihan R <<<\n");
	}
	if(n == 11){
		printf("THE LUCKY WINNER IS >>> Tristan B AND Rowan S <<<\n");
	}
	if(n == 12){
		printf("THE LUCKY WINNER IS >>> Marc R AND Edmund O <<<\n");
	}
    return EXIT_SUCCESS;
}

