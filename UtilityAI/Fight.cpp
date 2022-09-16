#include "Fight.h"
#include "HeaderActions.hpp"

void Fight::FightAgainst(Player* p1, Player* p2, int action) {
	p2->HP -= action;
	if (action == 1 /*Attack*/) {}
	if (action == 2 /*AttackSpe*/) {}
	if (action == 3/*Buff*/) {}
	if (action == 4/*Debuff*/) {}
	if (action == 5/*Defense*/) {}
}
