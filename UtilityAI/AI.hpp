#pragma once
#include "Player.h"
#include <iostream>
#include "Action.hpp"
#include <vector>

#ifndef AI_H_
#define AI_H_


class AI: public Player {
private:
	std::string name;
public:
	AI(): Player(), name("AI") {};
	int getHP() const { return this->HP; };
	int getMP() const { return this->MP; };
	void setHP(const int newHP) { HP = newHP; };
	void setMP(const int newMP) { MP = newMP; };
	std::vector<Action<Requirement>> TestActions(const std::vector<Action<Requirement>>) const;
};
#endif /* !AI_H_ */