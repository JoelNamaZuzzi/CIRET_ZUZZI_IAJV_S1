#pragma once

#ifndef ACTION_H

#define ACTION_H



#include <iostream>

#include <vector>
#include "VieManequin.h"
#include "effet.h"
class prerequis;

class Action
{
private :
	int cost;
	std::vector<prerequis*> requirements;
	std::vector<effet*> effects;

public:
	virtual void Act();
	bool Can();

	virtual void SetCost(int c) { this->cost = c; };
	virtual int GetCost()const { return this->cost; };

	void AddRequirements(prerequis* r);
	void AddEffect(effet* e);

	
};

#endif // !ACTION_H