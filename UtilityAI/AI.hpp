#pragma once
#include"Action.hpp"

class AI {
private:
	int HP = 100;
	int MP = 100;
	std::string name = "AI";
	int basestr = 10;
	int str = 10;
public:
	int getHP() const { return HP; };
	int getMP() const { return MP; };
	void setHP(const int newHP) { HP = newHP; };
	void setMP(const int newMP) { MP = newMP; };
};