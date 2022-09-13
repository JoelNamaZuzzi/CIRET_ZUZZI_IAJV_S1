#pragma once
#include "WhoStart.h"
#include "Player.h"
#include "Turn.h"
#include "Fight.h"

class GameManager
{
public:
	void Init();
	WhoStart start;
	Player player;
	Player AI;
	Turn turn;
	Fight fight;

	void GameState();

private:

};

