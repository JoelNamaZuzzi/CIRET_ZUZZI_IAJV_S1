#pragma once
#include "Action.hpp"
#include "BuffRequirement.hpp"
#include "BuffEffect.hpp"
class Buff : protected Action {
private:
	std::string name = "Buff";
public:
	Buff(BuffRequirement re,BuffEffect eff, int w) :Action(re,eff, w) {};
	virtual bool checkPossibleAction(int MP) const { if (MP >= require.MPneeded) return true; };
	float getUtility(const Player, const Player) const;
};