#pragma once
#include "Action.h"
#include <vector>
#include "etat.h"
#include "prerequis.h"

class Player
{
private :
	int score = 0;
	
public:
	std::vector<Action> actions;
	Action lastAction;
	etat currentPosition;
	Player();

};

