#pragma once
#include "Effect.hpp"

class DeBuffEffect : public Effect {
public:
	virtual void Execute(Player* enemy) {
		enemy->isDeBuffed=true;
		enemy->str -= 5;
		enemy->turnLeftDeBuff = 2;
	}
};