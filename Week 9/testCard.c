#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){
	Card c = newCard(3,YELLOW,HEARTS);
	assert(c != NULL);
	assert(cardColor(c) == YELLOW);
	assert(cardSuit(c) == HEARTS)
	return EXIT_SUCCESS;
}