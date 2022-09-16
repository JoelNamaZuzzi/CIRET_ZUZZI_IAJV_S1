#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include "Action.h"
#include "AttaqueAerienne.h"
#include "AttaqueBaisser.h"
#include "AttaquerDebout.h"
#include "Baisser.h"
#include "redescendre.h"
#include "relever.h"
#include "Sauter.h"
#include "coupSpecial.h"
#include <vector>
#include "prerequis.h"

class Player
{
private :
	int score = 0;
	std::vector<Action*> actions;
	
public:
	Action* currentAction;
	Action* lastAction;
	Player();
	int NbAction();
	void AddAction(Action* act) { actions.push_back(act); };
	Action* getAction(int index);
	std::vector<Action*> GetActionsCopy();

};

#endif // !PLAYER_H