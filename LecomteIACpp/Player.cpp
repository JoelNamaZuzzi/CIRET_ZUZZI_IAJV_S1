#include "Player.h"

Player::Player() {
	this->score = 0;
	this->actions.clear();
}

Action* Player::getAction(int index) {
	return actions [index];
}