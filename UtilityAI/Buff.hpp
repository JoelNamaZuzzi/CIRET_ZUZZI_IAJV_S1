#pragma once
#include "Action.hpp"
#include "BuffRequirement.hpp"
class Buff : protected Action <BuffRequirement> {
private:
	std::string name = "Buff";
public:
	Buff(BuffRequirement re, int w) :Action(re, w) {};
	virtual bool checkPossibleAction(int MP) const { if (MP >= require.MPneeded) return true; };
};