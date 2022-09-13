#pragma once
#include "Action.h"
#include <vector>
#include "prerequis.h"

class Player
{
private :
	int score = 0;
	
public:
	std::vector<Action> actions;
	Action lastAction;
	Player();

};

