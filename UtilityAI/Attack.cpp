#include "Attack.hpp"

float Attack::getUtility(const Player me, const Player enemy) const {
	return me.str / enemy.HP;
}