#pragma once
#include "Effect.hpp"
class DefenseEffect : public Effect {
	virtual void Execute(Player* me) {
		me->isDefending = true;
	}
};