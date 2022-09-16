#pragma once
#include "Effect.hpp"

class BuffEffect : public Effect {
public:
	virtual void Execute(Player* me) {
		me->isBuffed=true;
		me->str += 5;
		me->turnLeftBuff = 2;
	}
};