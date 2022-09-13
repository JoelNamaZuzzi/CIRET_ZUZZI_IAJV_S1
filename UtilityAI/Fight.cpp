#include "Fight.h"

Player Fight::FightAgainst(Player p1, Player p2, int damage) {
	p2.HP -= damage;

	return p2;
}
