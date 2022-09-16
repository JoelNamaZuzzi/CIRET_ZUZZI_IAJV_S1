#pragma once
#include "Effect.hpp"
class AttackEffect : public Effect {
public:
	AttackEffect() {};
	virtual void Execute(Player* me, Player* enemy) { 
		std::cout << "ma bite";
		if (enemy->isDefending == true) {
			enemy->HP -= me->str - 2;
		}
		else {
			enemy->HP -= me->str;
		}
	}
};