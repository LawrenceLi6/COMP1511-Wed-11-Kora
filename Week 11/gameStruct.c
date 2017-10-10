typedef struct _game {
    int turnNumber; // perhaps something like this?
    // ... anything else?

} game;

Game newGame (/* ... */) {
    // allocate memory for a game struct

    // set the turn number to start at 0

}

int currentTurn (Game game) {
    return game->turnNumber;
}

void playMove(Game game, playerMove move) {
    // if the player played an END_TURN move...

    // their turn has ended, so increase the turn number.
}

int currentPlayer(Game game) {
	
}