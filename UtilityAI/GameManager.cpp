#include "Header.h"

void GameManager::Init() {
	WhoStart start;
	Turn turn;
	Player player;
	Player AI;

	GameState();
}

void GameManager::GameState() {
	bool gamestate = true;
	while (gamestate)
	{
		if (start.WhoStartRandomiser() == 1) {
			cout << "Youre 1st \n";
			turn.PlayerTurn(1);
			gamestate = false;
		}
		else {
			cout << "Youre 2nd \n";
			turn.PlayerTurn(0);
			gamestate = false;
		}
	}
}