#pragma once
#include <iostream>
#include "prerequis.h"
#include "effet.h"
#include "etat.h"
#include <vector>

class Action
{
private :
	int cost;
	std::vector<prerequis> requirements;

public:
	void Act();
	bool Can();

	void SetCost(int c) { this->cost = c; };
	int GetCost()const { return this->cost; };

	
};

