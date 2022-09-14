#include "GameManager.h"
#include "HeaderActions.hpp"
#include <vector>
int main()
{
    //GameManager init;
    //init.Init();

    AI Robotchiotte;
    AttackRequirement bifleres(5);
    Attack biffle(bifleres, 1);
    std::vector<Action> tested;
    std::cout << biffle.getWeigth() << std::endl;
    //tested.push_back(biffle);
}

