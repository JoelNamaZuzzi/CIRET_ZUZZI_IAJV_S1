#pragma once
#include "Action.hpp"
#include "DeBuffRequirement.hpp"
#include "DebuffEffect.hpp"
class Debuff : protected Action{
private:
	std::string name = "Debuff";
public:
	Debuff(DeBuffRequirement re, DeBuffEffect eff, int w) :Action(re,eff, w) {};
	virtual bool checkPossibleAction(int MP) const { if (MP >= require.MPneeded) return true; };
	float getUtility(const Player, const Player, const float) const;
};