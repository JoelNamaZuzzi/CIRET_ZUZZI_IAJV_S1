#pragma once
#include "Requirement.hpp"
#include "AttackRequirement.hpp"
#include "Player.h"


template <class R>
class Action {
protected:
	R require;
	int weigth;
public:
	Action(R requi, int w) : require(requi), weigth(w) {};
	virtual R getRequire() const { return require; };
	virtual int getWeigth() const { return weigth; };
	virtual bool checkPossibleAction(int MP) const { if (MP >= require.MPneeded) return true; };
	virtual float getUtility(const Player) const { return 1.0f; };
};