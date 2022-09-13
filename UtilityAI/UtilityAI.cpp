#include <iostream>
#include "AI.hpp"
#include "Attack.hpp"
int main()
{
    AI MyAI;
    AttackRequirement Bite(5);
    Attack Biffle(Bite, 1);
    if (Biffle.checkPossibleAction(30)) { std::cout << "Biffle !"; }

}

