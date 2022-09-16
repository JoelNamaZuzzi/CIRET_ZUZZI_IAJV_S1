#include "Effect.hpp"

class BuffEffect : public Effect {
	void Execute(Player* me) {
		me->isBuffed;
		me->str += 5;
	}
};