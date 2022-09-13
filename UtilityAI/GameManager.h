#pragma once

class GameManager
{
public:
	void Init();
	WhoStart start;
	Player player;
	Player AI;
	Turn turn;

	void GameState();

private:

};

