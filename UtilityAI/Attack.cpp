#include "Attack.hpp"

float Attack::getUtility(const Player me, const Player enemy) const {
	std::cout << "test";
	return me.str / enemy.HP;
}