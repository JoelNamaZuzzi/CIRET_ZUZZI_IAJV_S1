#pragma once
#include "Action.hpp"
#include "AttackSpeRequirement.hpp"
class Attack : protected Action <AttackSpeRequirement> {
private:
	std::string name = "AttackSpe";
public:
	Attack(AttackSpeRequirement re, int w) :Action(re, w) {};
	virtual bool checkPossibleAction(int MP) const { if (MP >= require.MPneeded) return true; };
};