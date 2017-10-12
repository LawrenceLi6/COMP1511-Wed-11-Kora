typedef struct _game {
    int turnNumber;
    int currentPlayer;
    int direction;
} game;

Game newGame () {

}

int currentTurn (Game game) {
    return game->turnNumber;
}

void playMove(Game game, playerMove move) {
	if (move.action == END_TURN) {
		game->turnNumber++;
		if (game->direction == CLOCKWISE) {
			game->currentPlayer = (game->currentPlayer + 1) % NUM_PLAYERS;
		} else {
			game->currentPlayer = (game->currentPlayer - 1);
			if (game->currentPlayer < 0) {
				game->currentPlayer = NUM_PLAYERS-1;
			}
		}
	} else{
		printf("HHHHHAHHHHAHH\n");
	}
}

int currentPlayer(Game game) {
	return game->currentPlayer;
}