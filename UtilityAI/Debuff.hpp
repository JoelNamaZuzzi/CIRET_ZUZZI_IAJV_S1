#pragma once
#include "Action.hpp"
#include "DeBuffRequirement.hpp"
class Debuff : protected Action <DeBuffRequirement> {
private:
	std::string name = "Debuff";
public:
	Debuff(DeBuffRequirement re, int w) :Action(re, w) {};
	virtual bool checkPossibleAction(int MP) const { if (MP >= require.MPneeded) return true; };
};