#pragma once
#ifndef REVERSEASTAR_H
#define REVERSEASTAR_H
#include <vector>
#include "Player.h"

class ReverseAstar
{	
public :
	std::vector<Action*> GoapActions;
	std::vector<prerequis*> GoapPreconditions;
	ReverseAstar();
	void startSimu();
	std::vector<Action*> SimuActions;
	std::vector<effet*> SimuEffects;
};

#endif // !REVERSEASTAR_H