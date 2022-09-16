#pragma once
#include "Requirement.hpp"
#include "Player.h"
#include "Effect.hpp"
#include <algorithm>

class Action {
protected:
	Requirement require;
	int weigth;
public:
	Effect eff;
	Action(Requirement requi, Effect ff, int w) : require(requi), eff(ff), weigth(w) {};
	virtual Requirement getRequire() const { return require; };
	virtual int getWeigth() const { return weigth; };
	virtual bool checkPossibleAction(int MP) const { if (MP >= require.MPneeded) return true; };
	virtual float getUtility(const Player, const Player) const { return 1.0f; };
	
};