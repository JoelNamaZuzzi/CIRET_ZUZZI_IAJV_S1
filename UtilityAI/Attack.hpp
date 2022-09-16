#pragma once
#include "Action.hpp"
#include "AttackRequirement.hpp"
#include "AttackEffect.hpp"

class Attack : public Action {
private:
	std::string name = "Attack";
public:
	Attack(AttackRequirement re, AttackEffect eff, int w) :Action(re,eff, w) {};
	virtual bool checkPossibleAction(int MP) const {if (MP >= require.MPneeded) return true; };
	float getUtility(const Player, const Player) const override;
};