#pragma once
#include "Action.h"

#include "AttaqueAerienne.h"
#include "AttaqueBaisser.h"
#include "AttaquerDebout.h"
#include "Baisser.h"
#include "redescendre.h"
#include "relever.h"

#include <vector>
#include "prerequis.h"

class Player
{
private :
	int score = 0;
	std::vector<Action*> actions;

public:
	
	Action* lastAction;
	Player();

	void AddAction(Action* act) { actions.push_back(act); };

};
