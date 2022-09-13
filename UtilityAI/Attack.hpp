#pragma once
#include "Action.hpp"
#include "AttackRequirement.hpp"
class Attack : protected Action <AttackRequirement> {
private:
	std::string name = "Attack";
public:
	Attack(AttackRequirement re, int w) :Action(re,w) {};
	virtual bool checkPossibleAction(int MP) const { if (MP >= require.MPneeded) return true; };
	virtual float getUtility(const Player, const Player) const;
};