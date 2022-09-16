#pragma once
#include "Action.hpp"
#include "AttackSpeRequirement.hpp"
#include "AttackSpeEffect.hpp"
class AttackSpe : protected Action {
private:
	std::string name = "AttackSpe";
public:
	AttackSpe(AttackSpeRequirement re, AttackSpeEffect eff, int w) :Action(re, eff, w) {};
	virtual bool checkPossibleAction(int MP) const { if (MP >= require.MPneeded) return true; };
	float getUtility(const Player, const Player) const override;

};