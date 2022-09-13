#pragma once
#include "Header.h"

class GameManager
{
public:
	void Init();
	WhoStart start;
	Player player;
	Player playerAI;
	Turn turn;

	void GameState();

private:

};

